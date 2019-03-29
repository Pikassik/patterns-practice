#include <headers/white-builders/WhiteRookBuilder.h>

void WhiteRookBuilder::CreateUnit() {
  unit_ = std::make_shared<WhiteRook>();
}

void WhiteRookBuilder::BuildColor() {
  unit_->SetColor(false);
}
