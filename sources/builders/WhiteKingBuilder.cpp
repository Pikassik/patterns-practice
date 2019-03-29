#include <headers/white-builders/WhiteKingBuilder.h>

void WhiteKingBuilder::CreateUnit() {
  unit_ = std::make_shared<WhiteKing>();
}

void WhiteKingBuilder::BuildColor() {
  unit_->SetColor(false);
}

