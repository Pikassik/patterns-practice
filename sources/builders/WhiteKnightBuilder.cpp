#include <headers/white-builders/WhiteKnightBuilder.h>

void WhiteKnightBuilder::CreateUnit() {
  unit_ = std::make_shared<WhiteKnight>();
}

void WhiteKnightBuilder::BuildColor() {
  unit_->SetColor(false);
}
