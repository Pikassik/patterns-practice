#include <headers/white-builders/WhiteBishopBuilder.h>

void WhiteBishopBuilder::CreateUnit() {
  unit_ = std::make_shared<WhiteBishop>();
}

void WhiteBishopBuilder::BuildColor() {
  unit_->SetColor(false);
}
