#include <gtest/gtest.h>
#include <headers/white-figures/WhiteBishop.h>
#include <headers/white-figures/WhiteKing.h>
#include <headers/white-figures/WhiteKnight.h>
#include <headers/white-figures/WhitePawn.h>
#include <headers/white-figures/WhiteQueen.h>
#include <headers/white-figures/WhiteRook.h>
#include <headers/black-figures/BlackPawn.h>

TEST(FigurePossibleTest, Bishop) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  std::vector<std::pair<int, int>> expected_p_moves_n_damaged =
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
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves_n_damaged);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_moves_n_damaged);
}

TEST(FigurePossibleTest, King) {
  WhiteKing king;
  Unit* unit = dynamic_cast<Unit*>(&king);
  std::vector<std::pair<int, int>> expected_p_moves_n_damaged =
      {std::make_pair(1, 1), std::make_pair(1, 0),
       std::make_pair(1, -1), std::make_pair(0, -1),
       std::make_pair(-1, -1), std::make_pair(-1, 0),
       std::make_pair(-1, 1), std::make_pair(0, 1) };
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves_n_damaged);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_moves_n_damaged);
}

TEST(FigurePossibleTest, Knight) {
  WhiteKnight knight;
  Unit* unit = dynamic_cast<Unit*>(&knight);
  std::vector<std::pair<int, int>> expected_p_moves_n_damaged =
      {std::make_pair(2, 1), std::make_pair(2, -1),
       std::make_pair(1, -2), std::make_pair(-1, -2),
       std::make_pair(-2, -1), std::make_pair(-2, 1),
       std::make_pair(-1, 2), std::make_pair(1, 2) };
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves_n_damaged);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_moves_n_damaged);
}

TEST(FigurePossibleTest, Queen) {
  WhiteQueen queen;
  Unit* unit = dynamic_cast<Unit*>(&queen);
  std::vector<std::pair<int, int>> expected_p_moves_n_damaged =
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
       std::make_pair(0, 6), std::make_pair(0, 7),
       std::make_pair(1, 1), std::make_pair(2, 2),
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
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves_n_damaged);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_moves_n_damaged);
}

TEST(FigurePossibleTest, Rook) {
  WhiteRook rook;
  Unit* unit = dynamic_cast<Unit*>(&rook);
  std::vector<std::pair<int, int>> expected_p_moves_n_damaged =
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
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves_n_damaged);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_moves_n_damaged);
}

TEST(FigurePossibleTest, WhitePawn) {
  WhitePawn white_pawn;
  Unit* unit = dynamic_cast<Unit*>(&white_pawn);
  std::vector<std::pair<int, int>> expected_p_moves =
      {std::make_pair(0, 1)};
  std::vector<std::pair<int, int>> expected_p_damaged =
      {std::make_pair(1, 1), std::make_pair(-1, 1)};
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_damaged);
}

TEST(FigurePossibleTest, BlackPawn) {
  BlackPawn black_pawn;
  Unit* unit = dynamic_cast<Unit*>(&black_pawn);
  std::vector<std::pair<int, int>> expected_p_moves =
      {std::make_pair(0, -1)};
  std::vector<std::pair<int, int>> expected_p_damaged =
      {std::make_pair(-1, -1), std::make_pair(1, -1)};
  EXPECT_EQ(unit->GetPossibleMoves(), expected_p_moves);
  EXPECT_EQ(unit->GetPossibleDamaged(), expected_p_damaged);
}