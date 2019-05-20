#include <headers/common-figures/King.h>

const std::vector<std::pair<int, int>>& King::GetPossibleMoves() {
  return possible_moves_;
}

const std::vector<std::pair<int, int>>& King::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> King::possible_moves_ =
                    {std::make_pair(1, 1), std::make_pair(1, 0),
                     std::make_pair(1, -1), std::make_pair(0, -1),
                     std::make_pair(-1, -1), std::make_pair(-1, 0),
                     std::make_pair(-1, 1), std::make_pair(0, 1) };

const std::vector<std::pair<int, int>> King::possible_damaged_ =
                      {std::make_pair(1, 1), std::make_pair(1, 0),
                       std::make_pair(1, -1), std::make_pair(0, -1),
                       std::make_pair(-1, -1), std::make_pair(-1, 0),
                       std::make_pair(-1, 1), std::make_pair(0, 1) };
