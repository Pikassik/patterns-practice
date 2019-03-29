#include <headers/white-builders/WhitePawnBuilder.h>

void WhitePawnBuilder::CreateUnit() {
  unit_ = std::make_shared<WhitePawn>();
}

void WhitePawnBuilder::BuildColor() {
  unit_->SetColor(false);
}

