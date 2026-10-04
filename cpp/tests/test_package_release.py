"""Integrity and repeatability checks for the combined launcher snapshot."""
import hashlib
import importlib.util
import json
from pathlib import Path
import stat
import sys
import tempfile
import unittest
from unittest.mock import patch
import zipfile

SPEC = importlib.util.spec_from_file_location(
    "package_release", Path(__file__).resolve().parents[1] / "tools/package_release.py")
release = importlib.util.module_from_spec(SPEC)
sys.modules[SPEC.name] = release
SPEC.loader.exec_module(release)


class LauncherReleaseTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        (self.root / "cpp/resources").mkdir(parents=True)
        (self.root / "cpp/resources/release-readme-launchers.txt").write_text("Launchers @VERSION@\n")
        (self.root / "launch.sh").write_text("#!/bin/sh\n")
        (self.root / "launch.bat").write_bytes(b"@echo off\r\n")
        self.root_patch = patch.object(release, "ROOT", self.root)
        self.root_patch.start()
        common = [release.Entry("VERSION", b"0.2\n"),
                  release.Entry("PATCH-NOTES.md", b"Draft notes\n"),
                  release.Entry("licenses/notice.txt", b"License\n")]
        self.packages = {
            "linux": release.finalize_entries(common + [
                release.Entry("Phase Distorter", b"linux binary", 0o755),
                release.Entry("lib/libSDL2-2.0.so.0", b"runtime", 0o755),
                release.Entry("README.txt", b"Linux readme")], "linux", "0.2"),
            "windows": release.finalize_entries(common + [
                release.Entry("Phase Distorter.exe", b"windows binary", 0o755),
                release.Entry("SDL2.dll", b"runtime", 0o755),
                release.Entry("README.txt", b"Windows readme")], "windows", "0.2"),
        }

    def tearDown(self):
        self.root_patch.stop()
        self.temp.cleanup()

    def test_layout_manifest_and_payload_identity(self):
        entries = {entry.name: entry for entry in release.launcher_entries(self.packages, "0.2")}
        for name in ("launchers/linux/bin/eb_cpp", "launchers/linux/lib/libSDL2-2.0.so.0",
                     "launchers/windows/bin/eb_cpp.exe", "launchers/windows/bin/SDL2.dll",
                     "launch.sh", "launch.bat", "launchers/VERSION", "PATCH-NOTES.md"):
            self.assertIn(name, entries)
        self.assertNotIn("Phase Distorter", entries)
        self.assertEqual(entries["launchers/linux/bin/eb_cpp"].data, b"linux binary")
        self.assertEqual(entries["README.txt"].data, b"Launchers 0.2\n")
        manifest = json.loads(entries["MANIFEST.json"].data)
        self.assertEqual((manifest["version"], manifest["platform"]), ("0.2", "linux+windows"))
        for item in manifest["files"]:
            entry = entries[item["path"]]
            self.assertEqual(item["sha256"], hashlib.sha256(entry.data).hexdigest())
            self.assertEqual(item["mode"], f"{entry.mode:04o}")
        for line in entries["SHA256SUMS"].data.decode().splitlines():
            digest, name = line.split("  ", 1)
            self.assertEqual(digest, hashlib.sha256(entries[name].data).hexdigest())

    def test_shared_input_conflicts_rejected(self):
        self.packages["windows"].append(release.Entry("licenses/notice.txt", b"Other license"))
        with self.assertRaisesRegex(ValueError, "Conflicting"):
            release.launcher_entries(self.packages, "0.2")

    def test_folder_is_repeatable_and_preserves_modified_snapshot(self):
        entries = release.launcher_entries(self.packages, "0.2")
        folder = self.root / "release folder with spaces"
        release.write_folder(folder, entries)
        release.write_folder(folder, entries)
        executable = folder / "launchers/linux/bin/eb_cpp"
        self.assertEqual(stat.S_IMODE(executable.stat().st_mode), 0o755)
        executable.write_bytes(b"user modification")
        with self.assertRaisesRegex(ValueError, "snapshot differs"):
            release.write_folder(folder, entries)
        self.assertEqual(executable.read_bytes(), b"user modification")

    def test_zip_roundtrip_and_repeatability(self):
        entries = release.launcher_entries(self.packages, "0.2")
        destination = self.root / "Phase-Distorter-0.2-launchers-x86_64.zip"
        release.write_zip(destination, entries)
        first = destination.read_bytes()
        release.write_zip(destination, entries)
        self.assertEqual(destination.read_bytes(), first)
        with zipfile.ZipFile(destination) as archive:
            self.assertIsNone(archive.testzip())
            for entry in entries:
                name = destination.stem + "/" + entry.name
                self.assertEqual(archive.read(name), entry.data)
                self.assertEqual((archive.getinfo(name).external_attr >> 16) & 0o777, entry.mode)

    def test_asset_data_cannot_be_included_as_patch_notes(self):
        notes = self.root / "renamed.md"
        notes.write_bytes(b"EBCDATA1" + bytes(64))
        with self.assertRaisesRegex(ValueError, "asset-pack content rejected"):
            release.file_entry(notes, "PATCH-NOTES.md")
        notes = self.root / "game.ebpak"
        notes.write_bytes(b"data")
        with self.assertRaisesRegex(ValueError, "Retail/user-data input rejected"):
            release.file_entry(notes, "PATCH-NOTES.md")


if __name__ == "__main__":
    unittest.main()
