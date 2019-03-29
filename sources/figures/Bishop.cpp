#include <headers/common-figures/Bishop.h>

std::vector<std::pair<int, int>> Bishop::GetPossibleMoves() {
  return possible_moves_;
}

std::vector<std::pair<int, int>> Bishop::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> Bishop::possible_moves_ =
    {std::make_pair(1, 1), std::make_pair(2, 2),
     std::make_pair(3, 3), std::make_pair(4, 4),
     std::make_pair(5, 5), std::make_pair(6, 6),
     std::make_pair(7, 7),
     std::make_pair(1, -1), std::make_pair(2, -2),
     std::make_pair(3, -3), std::make_pair(4, -4),
     std::make_pair(5, -5), std::make_pair(6, -6),
     std::make_pair(7, -7),
     std::make_pair(-1, 1), std::make_pair(-2, 2),
     std::make_pair(-3, 3), std::make_pair(-4, 4),
     std::make_pair(-5, 5), std::make_pair(-6, 6),
     std::make_pair(-7, 7),
     std::make_pair(-1, -1), std::make_pair(-2, -2),
     std::make_pair(-3, -3), std::make_pair(-4, -4),
     std::make_pair(-5, -5), std::make_pair(-6, -6),
     std::make_pair(-7, -7) };

const std::vector<std::pair<int, int>> Bishop::possible_damaged_ =
    {std::make_pair(1, 1), std::make_pair(2, 2),
     std::make_pair(3, 3), std::make_pair(4, 4),
     std::make_pair(5, 5), std::make_pair(6, 6),
     std::make_pair(7, 7),
     std::make_pair(1, -1), std::make_pair(2, -2),
     std::make_pair(3, -3), std::make_pair(4, -4),
     std::make_pair(5, -5), std::make_pair(6, -6),
     std::make_pair(7, -7),
     std::make_pair(-1, 1), std::make_pair(-2, 2),
     std::make_pair(-3, 3), std::make_pair(-4, 4),
     std::make_pair(-5, 5), std::make_pair(-6, 6),
     std::make_pair(-7, 7),
     std::make_pair(-1, -1), std::make_pair(-2, -2),
     std::make_pair(-3, -3), std::make_pair(-4, -4),
     std::make_pair(-5, -5), std::make_pair(-6, -6),
     std::make_pair(-7, -7) };
