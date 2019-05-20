#include <headers/black-figures/BlackPawn.h>

const std::vector<std::pair<int, int>>& BlackPawn::GetPossibleMoves() {
  return possible_moves_;
}

const std::vector<std::pair<int, int>>& BlackPawn::GetPossibleDamaged() {
  return possible_damaged_;
}

const std::vector<std::pair<int, int>> BlackPawn::possible_moves_ =
    {std::make_pair(0, -1)};

const std::vector<std::pair<int, int>> BlackPawn::possible_damaged_ =
    {std::make_pair(-1, -1), std::make_pair(1, -1)};