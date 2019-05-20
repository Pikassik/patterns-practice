#include <headers/Board.h>
#include <tests/SetterCmp.h>
#include <tests/IsFigure.h>

class BoardTest : public ::testing::Test {
 protected:

  void SetUp() override {
    main_board_.FillBoard();
    board_copy_ = main_board_.board_;
  }

  void TearDown() override {}
  Board main_board_;
  std::vector<std::vector<std::shared_ptr<Unit>>> board_copy_;
};

TEST_F(BoardTest, Board) {
          
  IsRook(board_copy_[0][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[0][0].get()));
  
  IsKnight(board_copy_[1][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[1][0].get()));
  
  IsBishop(board_copy_[2][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[2][0].get()));
  
  IsQueen(board_copy_[3][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[3][0].get()));
  
  IsKing(board_copy_[4][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[4][0].get()));
  
  IsBishop(board_copy_[5][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[5][0].get()));
  
  IsKnight(board_copy_[6][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[6][0].get()));
  
  IsRook(board_copy_[7][0]);
  EXPECT_TRUE(ColorCmp(false, board_copy_[7][0].get()));
  
  for (int i = 0; i < 8; ++i) {
    IsPawn(board_copy_[i][1]);
    EXPECT_TRUE(ColorCmp(false, board_copy_[i][1].get()));
  }

  IsRook(board_copy_[0][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[0][7].get()));

  IsKnight(board_copy_[1][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[1][7].get()));

  IsBishop(board_copy_[2][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[2][7].get()));

  IsQueen(board_copy_[3][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[3][7].get()));

  IsKing(board_copy_[4][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[4][7].get()));

  IsBishop(board_copy_[5][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[5][7].get()));

  IsKnight(board_copy_[6][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[6][7].get()));

  IsRook(board_copy_[7][7]);
  EXPECT_TRUE(ColorCmp(true, board_copy_[7][7].get()));

  for (int i = 0; i < 8; ++i) {
    IsPawn(board_copy_[i][6]);
    EXPECT_TRUE(ColorCmp(true, board_copy_[i][6].get()));
  }
}