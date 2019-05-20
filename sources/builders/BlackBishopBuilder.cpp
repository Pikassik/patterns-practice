#include <headers/black-builders/BlackBishopBuilder.h>

void BlackBishopBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackBishop>();
}

void BlackBishopBuilder::BuildColor() {
  unit_->SetColor(true);
}

