#include <headers/black-builders/BlackKnightBuilder.h>

void BlackKnightBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackKnight>();
}

void BlackKnightBuilder::BuildColor() {
  unit_->SetColor(true);
}
