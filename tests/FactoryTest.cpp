#include <tests/IsFigure.h>
#include <headers/factories/WhiteFactory.h>
#include <headers/factories/BlackFactory.h>

TEST(FactoryTest, WhiteFactory) {
  WhiteFactory white_factory;
  
  auto bishop = std::dynamic_pointer_cast<Unit>(white_factory.CreateBishop());
  IsBishop(bishop);
  EXPECT_TRUE(ColorCmp(false, bishop.get()));

  auto king = std::dynamic_pointer_cast<Unit>(white_factory.CreateKing());
  IsKing(king);
  EXPECT_TRUE(ColorCmp(false, king.get()));

  auto knight = std::dynamic_pointer_cast<Unit>(white_factory.CreateKnight());
  IsKnight(knight);
  EXPECT_TRUE(ColorCmp(false, knight.get()));

  auto pawn = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  IsPawn(pawn);
  EXPECT_TRUE(ColorCmp(false, pawn.get()));

  auto queen = std::dynamic_pointer_cast<Unit>(white_factory.CreateQueen());
  IsQueen(queen);
  EXPECT_TRUE(ColorCmp(false, queen.get()));

  auto rook = std::dynamic_pointer_cast<Unit>(white_factory.CreateRook());
  IsRook(rook);
  EXPECT_TRUE(ColorCmp(false, rook.get()));
}

TEST(FactoryTest, BlackFactory) {
  BlackFactory black_factory;

  auto bishop = std::dynamic_pointer_cast<Unit>(black_factory.CreateBishop());
  IsBishop(bishop);
  EXPECT_TRUE(ColorCmp(true, bishop.get()));

  auto king = std::dynamic_pointer_cast<Unit>(black_factory.CreateKing());
  IsKing(king);
  EXPECT_TRUE(ColorCmp(true, king.get()));

  auto knight = std::dynamic_pointer_cast<Unit>(black_factory.CreateKnight());
  IsKnight(knight);
  EXPECT_TRUE(ColorCmp(true, knight.get()));

  auto pawn = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  IsPawn(pawn);
  EXPECT_TRUE(ColorCmp(true, pawn.get()));

  auto queen = std::dynamic_pointer_cast<Unit>(black_factory.CreateQueen());
  IsQueen(queen);
  EXPECT_TRUE(ColorCmp(true, queen.get()));

  auto rook = std::dynamic_pointer_cast<Unit>(black_factory.CreateRook());
  IsRook(rook);
  EXPECT_TRUE(ColorCmp(true, rook.get()));
}
