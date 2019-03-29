#include <headers/black-builders/BlackQueenBuilder.h>

void BlackQueenBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackQueen>();
}

void BlackQueenBuilder::BuildColor() {
  unit_->SetColor(true);
}
