#include <headers/black-builders/BlackPawnBuilder.h>

void BlackPawnBuilder::CreateUnit() {
  unit_ = std::make_shared<BlackPawn>();
}

void BlackPawnBuilder::BuildColor() {
  unit_->SetColor(true);
}
