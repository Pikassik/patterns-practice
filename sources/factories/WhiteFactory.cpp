#include <headers/factories/WhiteFactory.h>

std::shared_ptr<Bishop> WhiteFactory::CreateBishop() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhiteBishopBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Bishop>(director.GetUnit());
}

std::shared_ptr<King> WhiteFactory::CreateKing() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhiteKingBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<King>(director.GetUnit());
}

std::shared_ptr<Knight> WhiteFactory::CreateKnight() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhiteKnightBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Knight>(director.GetUnit());
}

std::shared_ptr<Pawn> WhiteFactory::CreatePawn() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhitePawnBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Pawn>(director.GetUnit());
}

std::shared_ptr<Queen> WhiteFactory::CreateQueen() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhiteQueenBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Queen>(director.GetUnit());
}

std::shared_ptr<Rook> WhiteFactory::CreateRook() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<WhiteRookBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Rook>(director.GetUnit());
}
