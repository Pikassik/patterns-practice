#include <headers/SquadCompositeCombatDecorator.h>

SquadCompositeCombatDecorator::SquadCompositeCombatDecorator
    (const std::shared_ptr<SquadComposite>& squad)
    :squad_(squad) {}

std::shared_ptr<SquadComposite> SquadCompositeCombatDecorator::GetSquadPtr() {
  return squad_;
}

bool SquadCompositeCombatDecorator::GetSelfHealing() {
  return false;
}

bool SquadCompositeCombatDecorator::GetSelfShieldRecover() {
  return false;
}

bool SquadCompositeCombatDecorator::GetExtraHealing(int hp) {
  return false;
}

bool SquadCompositeCombatDecorator::GetExtraShield(int shield) {
  return false;
}

void SquadCompositeCombatDecorator::AddSquad(const std::shared_ptr<
    SquadComposite>& squad) {
  squad_->AddSquad(squad);
}

void SquadCompositeCombatDecorator::AddUnit(const std::shared_ptr<Unit>& unit) {
  squad_->AddUnit(unit);
}

void SquadCompositeCombatDecorator::GetUnits(std::unordered_set<std::shared_ptr<Unit>>& units) const {
  squad_->GetUnits(units);
}
