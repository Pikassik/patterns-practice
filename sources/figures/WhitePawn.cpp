#include <headers/white-figures/WhitePawn.h>

const std::vector<std::pair<int, int>>& WhitePawn::GetPossibleMoves() {
  return possible_moves_;
}

const std::vector<std::pair<int, int>>& WhitePawn::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> WhitePawn::possible_moves_ =
    {std::make_pair(0, 1)};

const std::vector<std::pair<int, int>> WhitePawn::possible_damaged_ =
    {std::make_pair(1, 1), std::make_pair(-1, 1)};