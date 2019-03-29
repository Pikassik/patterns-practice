#include <headers/common-figures/Rook.h>

const std::vector<std::pair<int, int>>& Rook::GetPossibleMoves() {
  return possible_moves_;
}

const std::vector<std::pair<int, int>>& Rook::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> Rook::possible_moves_ =
                    {std::make_pair(1, 0), std::make_pair(2, 0),
                     std::make_pair(3, 0), std::make_pair(4, 0),
                     std::make_pair(5, 0), std::make_pair(6, 0),
                     std::make_pair(7, 0), std::make_pair(0, -1),
                     std::make_pair(0, -2), std::make_pair(0, -3),
                     std::make_pair(0, -4), std::make_pair(0, -5),
                     std::make_pair(0, -6), std::make_pair(0, -7),
                     std::make_pair(-1, 0), std::make_pair(-2, 0),
                     std::make_pair(-3, 0), std::make_pair(-4, 0),
                     std::make_pair(-5, 0), std::make_pair(-6, 0),
                     std::make_pair(-7, 0), std::make_pair(0, 1),
                     std::make_pair(0, 2), std::make_pair(0, 3),
                     std::make_pair(0, 4), std::make_pair(0, 5),
                     std::make_pair(0, 6), std::make_pair(0, 7) };

const std::vector<std::pair<int, int>> Rook::possible_damaged_ =
                    {std::make_pair(1, 0), std::make_pair(2, 0),
                     std::make_pair(3, 0), std::make_pair(4, 0),
                     std::make_pair(5, 0), std::make_pair(6, 0),
                     std::make_pair(7, 0), std::make_pair(0, -1),
                     std::make_pair(0, -2), std::make_pair(0, -3),
                     std::make_pair(0, -4), std::make_pair(0, -5),
                     std::make_pair(0, -6), std::make_pair(0, -7),
                     std::make_pair(-1, 0), std::make_pair(-2, 0),
                     std::make_pair(-3, 0), std::make_pair(-4, 0),
                     std::make_pair(-5, 0), std::make_pair(-6, 0),
                     std::make_pair(-7, 0), std::make_pair(0, 1),
                     std::make_pair(0, 2), std::make_pair(0, 3),
                     std::make_pair(0, 4), std::make_pair(0, 5),
                     std::make_pair(0, 6), std::make_pair(0, 7) };
