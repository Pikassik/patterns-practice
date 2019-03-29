#include <headers/SquadComposite.h>

std::shared_ptr<SquadComposite> SquadComposite::GetSquadPtr() {
  return shared_from_this();
}

bool SquadComposite::GetSelfHealing() {
  for (std::shared_ptr<SquadComposite>& child: children_) {
    child->GetSelfHealing();
  }

  for (const std::shared_ptr<Unit>& unit: units_) {
    unit->GetSelfHealing();
  }

  return true;
}

bool SquadComposite::GetSelfShieldRecover() {
  for (std::shared_ptr<SquadComposite>& child: children_) {
    child->GetSelfShieldRecover();
  }

  for (const std::shared_ptr<Unit>& unit: units_) {
    unit->GetSelfShieldRecover();
  }

  return true;
}

bool SquadComposite::GetExtraHealing(int hp) {
  for (std::shared_ptr<SquadComposite>& child: children_) {
    child->GetExtraHealing(hp);
  }

  for (const std::shared_ptr<Unit>& unit: units_) {
    unit->GetHealing(hp);
  }

  return true;
}

bool SquadComposite::GetExtraShield(int shield) {
  for (std::shared_ptr<SquadComposite>& child: children_) {
    child->GetExtraShield(shield);
  }

  for (const std::shared_ptr<Unit>& unit: units_) {
    unit->GetShield(shield);
  }

  return true;
}

void SquadComposite::AddSquad(const std::shared_ptr<SquadComposite>& squad) {
  children_.push_back(squad);
}

void SquadComposite::AddUnit(const std::shared_ptr<Unit>& unit) {
  units_.insert(unit);
}

void SquadComposite::GetUnits(std::unordered_set<std::shared_ptr<Unit>>& units) const {
  for (const std::shared_ptr<Unit>& unit: units_) {
    units.insert(unit);
  }

  for (const std::shared_ptr<SquadComposite>& child: children_) {
    child->GetUnits(units);
  }
}

bool SquadComposite::RemoveUnit(const std::shared_ptr<Unit>& unit) {
  if (units_.find(unit) != units_.end()) {
    units_.erase(unit);
    return true;
  }

  bool flag = false;
  for (size_t i = 0; i < children_.size() && !flag; ++i) {
    flag = children_[i]->RemoveUnit(unit);
  }

  return flag;
}
