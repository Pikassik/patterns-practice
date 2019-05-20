#include <headers/black-builders/BlackRookBuilder.h>

void BlackRookBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackRook>();
}

void BlackRookBuilder::BuildColor() {
  unit_->SetColor(true);
}
