#include <headers/Board.h>

Board::Board() :board_(8, std::vector<std::shared_ptr<Unit>>(8)) {}

void Board::FillBoard() {
  WhiteFactory white_factory;
  BlackFactory black_factory;
  board_[0][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateRook());
  board_[1][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateKnight());
  board_[2][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateBishop());
  board_[3][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateQueen());
  board_[4][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateKing());
  board_[5][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateBishop());
  board_[6][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateKnight());
  board_[7][0] = std::dynamic_pointer_cast<Unit>(white_factory.CreateRook());

  board_[0][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[1][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[2][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[3][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[4][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[5][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[6][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());
  board_[7][1] = std::dynamic_pointer_cast<Unit>(white_factory.CreatePawn());

  board_[0][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateRook());
  board_[1][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateKnight());
  board_[2][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateBishop());
  board_[3][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateQueen());
  board_[4][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateKing());
  board_[5][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateBishop());
  board_[6][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateKnight());
  board_[7][7] = std::dynamic_pointer_cast<Unit>(black_factory.CreateRook());

  board_[0][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[1][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[2][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[3][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[4][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[5][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[6][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
  board_[7][6] = std::dynamic_pointer_cast<Unit>(black_factory.CreatePawn());
}
