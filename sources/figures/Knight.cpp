#include <headers/common-figures/Knight.h>

std::vector<std::pair<int, int>> Knight::GetPossibleMoves() {
  return possible_moves_;
}

std::vector<std::pair<int, int>> Knight::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> Knight::possible_moves_ =
                    {std::make_pair(2, 1), std::make_pair(2, -1),
                     std::make_pair(1, -2), std::make_pair(-1, -2),
                     std::make_pair(-2, -1), std::make_pair(-2, 1),
                     std::make_pair(-1, 2), std::make_pair(1, 2) };

const std::vector<std::pair<int, int>> Knight::possible_damaged_ =
                      {std::make_pair(2, 1), std::make_pair(2, -1),
                       std::make_pair(1, -2), std::make_pair(-1, -2),
                       std::make_pair(-2, -1), std::make_pair(-2, 1),
                       std::make_pair(-1, 2), std::make_pair(1, 2) };

