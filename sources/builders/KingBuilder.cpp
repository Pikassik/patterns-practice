#include <headers/common-builders/KingBuilder.h>

void KingBuilder::BuildMaxHP() {
  unit_->SetMaxHP(1000);
}

void KingBuilder::BuildHP() {
  unit_->SetHP(1000);
}

void KingBuilder::BuildMaxShield() {
  unit_->SetMaxShield(10);
}

void KingBuilder::BuildShield() {
  unit_->SetShield(10);
}

void KingBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(1);
}

void KingBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(1);
}

void KingBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(3);
}

