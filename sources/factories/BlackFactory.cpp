#include <headers/factories/BlackFactory.h>

std::shared_ptr<Bishop> BlackFactory::CreateBishop() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackBishopBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Bishop>(director.GetUnit());
}

std::shared_ptr<King> BlackFactory::CreateKing() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackKingBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<King>(director.GetUnit());
}

std::shared_ptr<Knight> BlackFactory::CreateKnight() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackKnightBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Knight>(director.GetUnit());
}

std::shared_ptr<Pawn> BlackFactory::CreatePawn() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackPawnBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Pawn>(director.GetUnit());
}

std::shared_ptr<Queen> BlackFactory::CreateQueen() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackQueenBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Queen>(director.GetUnit());
}

std::shared_ptr<Rook> BlackFactory::CreateRook() {
  Director director;
  std::shared_ptr<UnitBuilder> builder = std::make_shared<BlackRookBuilder>();
  director.SetUnitBuilder(builder);
  director.CostructUnit();
  return std::dynamic_pointer_cast<Rook>(director.GetUnit());
}
