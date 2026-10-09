' Double-click this file to create shortcuts directly to the native application.
' No batch file or command shell is involved when the resulting shortcut launches.
' For terminal use: cscript //nologo install-shortcuts.vbs --destination "DIRECTORY"
Option Explicit

Dim files, shell, root, launcher, icon, destination, index, argument
Set files = CreateObject("Scripting.FileSystemObject")
Set shell = CreateObject("WScript.Shell")
root = files.GetParentFolderName(WScript.ScriptFullName)
launcher = files.BuildPath(root, "Phase Distorter.exe")
If Not files.FileExists(launcher) Then launcher = files.BuildPath(root, "launchers\windows\bin\eb_cpp.exe")
icon = files.BuildPath(root, "cpp\resources\phase-distorter.ico")
destination = ""

index = 0
Do While index < WScript.Arguments.Count
    argument = LCase(WScript.Arguments(index))
    If argument = "--help" Or argument = "/?" Then
        WScript.Echo "Double-click install-shortcuts.vbs to create Desktop and Start Menu shortcuts."
        WScript.Echo "Terminal: cscript //nologo install-shortcuts.vbs [--destination ""DIRECTORY""]"
        WScript.Echo "Default: add Phase Distorter to your Desktop and Start Menu."
        WScript.Echo "--destination: create one shortcut there instead of the default folders."
        WScript.Echo "Keep this project folder in place; rerun setup after moving it."
        WScript.Quit 0
    ElseIf argument = "--destination" Then
        If destination <> "" Or index + 1 >= WScript.Arguments.Count Then
            Fail "Supply --destination once, followed by a directory."
        End If
        index = index + 1
        destination = WScript.Arguments(index)
        If Len(Trim(destination)) = 0 Then Fail "The destination directory cannot be empty."
    Else
        Fail "Unknown option: " & WScript.Arguments(index)
    End If
    index = index + 1
Loop

If Not files.FileExists(launcher) Then Fail "Cannot find Phase Distorter.exe or the bundled Windows executable."
If Not files.FileExists(icon) Then
    icon = launcher
End If

If destination <> "" Then
    ' Resolve against the caller's directory, then avoid both user desktop folders.
    ' Create first: some WSH hosts only fully canonicalize existing directories.
    EnsureDirectory destination
    AddShortcut files.GetAbsolutePathName(destination)
Else
    AddShortcut shell.SpecialFolders("Desktop")
    AddShortcut files.BuildPath(shell.SpecialFolders("Programs"), "Phase Distorter")
End If
WScript.Echo "Shortcut setup complete. Keep the project folder in its current location."

Sub Fail(ByVal message)
    WScript.Echo "Phase Distorter: " & message
    WScript.Quit 1
End Sub

Sub EnsureDirectory(ByVal path)
    Dim missing(), depth, cursor, parent, position
    depth = 0
    cursor = path
    ' Collect missing ancestors, then create them from the nearest existing one.
    ' Keep the requested destination intact while walking toward that ancestor.
    Do While Not files.FolderExists(cursor)
        ReDim Preserve missing(depth)
        missing(depth) = cursor
        depth = depth + 1
        parent = files.GetParentFolderName(cursor)
        If parent = "" Then parent = "."
        If parent = cursor Then Fail "Cannot create destination: " & path
        cursor = parent
    Loop
    For position = depth - 1 To 0 Step -1
        On Error Resume Next
        files.CreateFolder missing(position)
        If Err.Number <> 0 Then Fail "Cannot create destination " & missing(position) & ": " & Err.Description
        On Error GoTo 0
    Next
End Sub

Sub AddShortcut(ByVal folder)
    Dim shortcutPath, shortcut
    shortcutPath = files.BuildPath(folder, "Phase Distorter.lnk")
    EnsureDirectory folder
    On Error Resume Next
    Set shortcut = shell.CreateShortcut(shortcutPath)
    If Err.Number <> 0 Then Fail "Cannot create shortcut " & shortcutPath & ": " & Err.Description
    ' TargetPath is a filesystem path, not shell syntax: spaces and Unicode are
    ' passed directly to the Windows shortcut API without command-line quoting.
    shortcut.TargetPath = launcher
    shortcut.Arguments = ""
    shortcut.WorkingDirectory = root
    shortcut.IconLocation = icon & ",0"
    shortcut.Description = "Phase Distorter - EarthBound / Mother 2 PC port"
    shortcut.WindowStyle = 1
    shortcut.Save
    If Err.Number <> 0 Then Fail "Cannot save shortcut " & shortcutPath & ": " & Err.Description
    On Error GoTo 0
    ' A double-clicked WScript run gets one completion dialog after all shortcuts;
    ' terminal users still receive a line for each path that was created.
    If LCase(files.GetFileName(WScript.FullName)) = "cscript.exe" Then WScript.Echo "Created " & shortcutPath
End Sub
