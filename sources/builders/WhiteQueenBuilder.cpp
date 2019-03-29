#include <headers/white-builders/WhiteQueenBuilder.h>

void WhiteQueenBuilder::CreateUnit() {
  unit_ = std::make_shared<WhiteQueen>();
}

void WhiteQueenBuilder::BuildColor() {
  unit_->SetColor(false);
}
