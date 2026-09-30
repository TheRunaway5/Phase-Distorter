#include "eb/native/world_pathfinding.hpp"
#include <algorithm>
#include <numeric>
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
struct Grid {
  unsigned width{}, height{};
  std::vector<std::uint8_t> cells;
  std::uint8_t &at(int x, int y) {
    if (x < 0 || y < 0 || unsigned(x) >= width || unsigned(y) >= height)
      throw std::out_of_range("Path search queried outside its logical grid");
    return cells[unsigned(y) * width + unsigned(x)];
  }
};
constexpr std::array<int, 4> dx{0, 1, 0, -1}, dy{-1, 0, 1, 0};
constexpr std::array<int, 4> diagonal_x{1, 1, -1, -1}, diagonal_y{-1, 1, 1, -1};
// The authored worklist has fifty usable entries and drops an enqueue when
// full. Preserve that search policy with host indices; no source heap exists.
struct Frontier {
  std::array<CollisionCell, 51> cells{};
  unsigned read{}, write{};
  bool empty() const { return read == write; }
  void push(CollisionCell cell) {
    const auto next = (write + 1) % cells.size();
    if (next != read) {
      cells[write] = cell;
      write = next;
    }
  }
  CollisionCell pop() {
    auto cell = cells[read];
    read = (read + 1) % cells.size();
    return cell;
  }
};
void search(Grid &grid, std::span<const CollisionCell> targets,
            std::span<WorldPathCandidate *> group) {
  for (auto &value : grid.cells)
    if (value != 253)
      value = 254;
  for (const auto *entry : group)
    if (grid.at(entry->origin.x, entry->origin.y) != 253)
      grid.at(entry->origin.x, entry->origin.y) = 255;
  Frontier frontier;
  for (const auto target : targets)
    frontier.push(target);
  unsigned reached = 0, processed = 0;
  const auto width = group.front()->width, height = group.front()->height;
  while (!frontier.empty()) {
    const auto point = frontier.pop();
    const auto old = grid.at(point.x, point.y);
    if (old < 254)
      continue;
    bool fits = true;
    for (unsigned y = 0; y < height && fits; ++y)
      for (unsigned x = 0; x < width; ++x)
        if (grid.at(point.x + x, point.y + y) == 253) {
          fits = false;
          break;
        }
    if (!fits) {
      grid.at(point.x, point.y) = 252;
      continue;
    }
    if (old == 255)
      ++reached;
    std::uint8_t best = 252;
    for (unsigned direction = 0; direction < 4; ++direction) {
      const int x = int(point.x) + dx[direction],
                y = int(point.y) + dy[direction];
      const auto value = grid.at(x, y);
      if (value >= 254)
        frontier.push({std::uint16_t(x), std::uint16_t(y)});
      else if (value < best)
        best = value;
    }
    auto &value = grid.at(point.x, point.y);
    value = best == 252 ? 0 : std::uint8_t(best + 1);
    if (best != 252 && value == 64)
      for (unsigned direction = 0; direction < 4; ++direction) {
        auto &neighbor =
            grid.at(int(point.x) + dx[direction], int(point.y) + dy[direction]);
        if (neighbor >= 254)
          neighbor = 252;
      }
    if (++processed == 0xffff || reached == group.size())
      break;
  }
}
std::vector<CollisionCell> reconstruct(Grid &grid, CollisionCell origin) {
  std::uint8_t value = grid.at(origin.x, origin.y);
  if (value > 251)
    return {};
  std::vector<CollisionCell> result{origin};
  int x = origin.x, y = origin.y;
  unsigned previous = 0;
  while (value) {
    --value;
    unsigned cardinal = 4, diagonal = 4;
    int cardinal_x{}, cardinal_y{}, next_x{}, next_y{};
    for (unsigned n = 0; n < 4; ++n) {
      const unsigned direction = (previous + n) & 3;
      const int nx = x + dx[direction], ny = y + dy[direction];
      if (grid.at(nx, ny) != value)
        continue;
      if (cardinal == 4) {
        cardinal = direction;
        cardinal_x = nx;
        cardinal_y = ny;
      }
      const int corner_x = x + diagonal_x[direction],
                corner_y = y + diagonal_y[direction];
      const auto next = (direction + 1) & 3;
      if (unsigned(grid.at(corner_x, corner_y)) == unsigned(value) - 1 &&
          grid.at(x + dx[next], y + dy[next]) == value) {
        diagonal = direction;
        next_x = corner_x;
        next_y = corner_y;
        break;
      }
    }
    if (diagonal != 4) {
      x = next_x;
      y = next_y;
      previous = diagonal;
      --value;
    } else if (cardinal != 4) {
      x = cardinal_x;
      y = cardinal_y;
      previous = cardinal;
    } else
      break;
    if (result.size() == 64)
      break;
    result.push_back({std::uint16_t(x), std::uint16_t(y)});
  }
  return result;
}
void compress(std::vector<CollisionCell> &path) {
  if (path.size() < 3)
    return;
  unsigned destination = 1;
  int previous_x = path[1].x, previous_y = path[1].y;
  auto step_x = wrap(unsigned(path[1].x) - path[0].x);
  auto step_y = wrap(unsigned(path[1].y) - path[0].y);
  for (unsigned i = 2; i < path.size(); ++i) {
    const auto next = path[i];
    if (wrap(unsigned(previous_x) + step_x) != next.x ||
        wrap(unsigned(previous_y) + step_y) != next.y) {
      ++destination;
      step_x = wrap(unsigned(next.x) - previous_x);
      step_y = wrap(unsigned(next.y) - previous_y);
    }
    path[destination] = next;
    previous_x = next.x;
    previous_y = next.y;
  }
  path.resize(destination + 1);
}
void solve(Grid &grid, std::span<const CollisionCell> targets,
           std::vector<WorldPathCandidate> &entries) {
  for (unsigned y = 0; y < grid.height; ++y)
    grid.at(0, y) = grid.at(grid.width - 1, y) = 253;
  for (unsigned x = 0; x < grid.width; ++x)
    grid.at(x, 0) = grid.at(x, grid.height - 1) = 253;
  std::vector<WorldPathCandidate *> ordered;
  for (auto &entry : entries)
    ordered.push_back(&entry);
  // Actual selection sort: equal shapes retain the source's resulting order,
  // which is not generally equivalent to a stable_sort after earlier swaps.
  for (unsigned i = 0; i + 1 < ordered.size(); ++i) {
    unsigned best = i;
    for (unsigned j = i + 1; j < ordered.size(); ++j)
      if (std::pair{ordered[j]->height, ordered[j]->width} <
          std::pair{ordered[best]->height, ordered[best]->width})
        best = j;
    std::swap(ordered[i], ordered[best]);
  }
  for (unsigned first = 0; first < ordered.size();) {
    unsigned end = first + 1;
    while (end < ordered.size() &&
           ordered[end]->width == ordered[first]->width &&
           ordered[end]->height == ordered[first]->height)
      ++end;
    // The source's cached previous shape starts at0,0. A zero-size first
    // group reconstructs directly from the initial grid without a search.
    if (ordered[first]->width || ordered[first]->height)
      search(grid, targets, std::span(ordered).subspan(first, end - first));
    for (unsigned i = first; i < end; ++i) {
      auto &entry = *ordered[i];
      entry.points = reconstruct(grid, entry.origin);
      entry.raw_length = entry.points.size();
      compress(entry.points);
    }
    first = end;
  }
}
} // namespace
WorldPathfinding::WorldPathfinding(ActorWorld &actors,
                                   const WorldCollision &collision,
                                   const WorldMapArea &area,
                                   const WorldPartyState &formation,
                                   const party::State &party)
    : actors_(actors), collision_(collision), area_(area),
      formation_(formation), party_(party) {}
bool WorldPathfinding::uses(const ActorWorld &actors,
                            const WorldCollision &collision,
                            const WorldMapArea &area,
                            const WorldPartyState &formation,
                            const party::State &party) const noexcept {
  return &actors_ == &actors && &collision_ == &collision && &area_ == &area &&
         &formation_ == &formation && &party_ == &party;
}
const WorldActorPath *WorldPathfinding::path(ActorId id) const {
  const auto role = actors_.actor(id).authored_role();
  if (!role)
    return nullptr;
  const auto found = paths_.find(*role);
  return found == paths_.end() ? nullptr : &found->second;
}
bool WorldPathfinding::uses(const ActorWorld &actors,
                            const WorldCollision &collision) const noexcept {
  return &actors_ == &actors && &collision_ == &collision;
}
bool WorldPathfinding::uses(const ActorWorld &actors,
                            const WorldCollision &collision,
                            const WorldMapArea &area) const noexcept {
  return &actors_ == &actors && &collision_ == &collision && &area_ == &area;
}
std::uint16_t WorldPathfinding::remaining(ActorId id) const {
  const auto *route = path(id);
  return route ? route->remaining : 0;
}
CollisionCell WorldPathfinding::current_point(ActorId id) const {
  if (failed_)
    throw std::logic_error("Native pathfinding owner failed");
  const auto *route = path(id);
  if (!route || route->next >= route->points.size())
    throw std::logic_error("Native actor has no current path point");
  return route->points[route->next];
}
std::uint16_t WorldPathfinding::consume_point(ActorId id, bool advance_last) {
  (void)current_point(id);
  auto &route = paths_.at(*actors_.actor(id).authored_role());
  if (!route.remaining)
    throw std::logic_error("Authored path count would underflow");
  --route.remaining;
  if (route.remaining || advance_last)
    ++route.next;
  return route.remaining;
}
std::uint16_t WorldPathfinding::consume_followed_point(ActorId id) {
  return consume_point(id, false);
}
std::uint16_t WorldPathfinding::consume_script_point(ActorId id) {
  return consume_point(id, true);
}
bool WorldPathfinding::uses(const ActorWorld &actors,
                            const WorldPartyState &formation,
                            const party::State &party) const noexcept {
  return &actors_ == &actors && &formation_ == &formation && &party_ == &party;
}
void WorldPathfinding::clear_candidate_cost(std::size_t index) {
  if (failed_)
    throw std::logic_error("Native pathfinding owner failed");
  candidates_.at(index).raw_length = 0;
}
unsigned WorldPathfinding::find_to_party(unsigned width, unsigned height) {
  if (failed_)
    throw std::logic_error("Native pathfinding owner failed");
  try {
    if (width != height || width < 3 || height < 3 || width > 64 ||
        height > 64 || !party_.party_count ||
        party_.party_count > formation_.roles.size())
      throw std::invalid_argument("Invalid party pathfinding domain");
    const auto origin = [&](unsigned role) {
      const auto id = actors_.actor_for_role(role);
      if (!id)
        throw std::logic_error(
            "Party pathfinding requires an owned formation actor and shape");
      const auto &actor = actors_.actor(*id);
      const auto point =
          collision_.origin({std::uint16_t(actor.action().position[0] >> 16),
                             std::uint16_t(actor.action().position[1] >> 16)},
                            actor.appearance_context.shape);
      return CollisionCell{std::uint16_t(point.x >> 3),
                           std::uint16_t(point.y >> 3)};
    };
    const auto centre = origin(formation_.current_leader_role);
    const CollisionCell half{std::uint16_t(width / 2),
                             std::uint16_t(height / 2)};
    const CollisionCell top{wrap(unsigned(centre.x) - half.x),
                            wrap(unsigned(centre.y) - half.y)};
    std::vector<CollisionCell> targets;
    for (unsigned i = 0; i < party_.party_count; ++i) {
      const auto point = origin(formation_.roles[i]);
      targets.push_back({std::uint16_t((point.x - top.x) & 63),
                         std::uint16_t((point.y - top.y) & 63)});
    }
    Grid grid{width, height, std::vector<std::uint8_t>(width * height)};
    for (unsigned y = 0; y < height; ++y)
      for (unsigned x = 0; x < width; ++x)
        grid.at(x, y) = (area_.collision(wrap(unsigned(top.x) + x),
                                         wrap(unsigned(top.y) + y)) &
                         0xc0)
                            ? 253
                            : 0;
    std::vector<WorldPathCandidate> candidates;
    for (unsigned role = 0; role < 30; ++role) {
      const auto id = actors_.actor_for_role(role);
      if (!id)
        continue;
      const auto &actor = actors_.actor(*id);
      if (!actor.action().alive || actor.behavior.path_state != 0xffff)
        continue;
      const auto &shape = collision_.shape(actor.appearance_context.shape);
      const auto point = origin(role);
      candidates.push_back({*id,
                            {std::uint16_t((point.x - top.x) & 63),
                             std::uint16_t((point.y - top.y) & 63)},
                            shape.width_cells,
                            shape.height_cells,
                            0,
                            {}});
    }
    solve(grid, targets, candidates);
    const auto routed = unsigned(
        std::count_if(candidates.begin(), candidates.end(),
                      [](const auto &entry) { return !entry.points.empty(); }));
    auto paths = paths_;
    for (const auto &entry : candidates)
      if (!entry.points.empty())
        paths[*actors_.actor(entry.actor).authored_role()] = {
            entry.points, 0, std::uint16_t(entry.points.size())};
    centre_ = centre;
    half_ = half;
    top_left_ = top;
    targets_ = std::move(targets);
    candidates_ = std::move(candidates);
    paths_ = std::move(paths);
    if (!routed) {
      for (unsigned role = 0; role < 30; ++role)
        if (const auto id = actors_.actor_for_role(role))
          if (actors_.actor(*id).action().alive)
            actors_.actor(*id).behavior.path_state = 1;
    } else
      for (const auto &entry : candidates_)
        if (entry.points.empty())
          actors_.actor(entry.actor).behavior.path_state = 1;
    return routed;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
