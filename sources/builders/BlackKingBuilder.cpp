#include <headers/black-builders/BlackKingBuilder.h>

void BlackKingBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackKing>();
}

void BlackKingBuilder::BuildColor() {
  unit_->SetColor(true);
}

