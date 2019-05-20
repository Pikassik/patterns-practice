#pragma once
#include <headers/SquadComposite.h>

class SquadCompositeCombatDecorator : public SquadComposite {
 public:
  SquadCompositeCombatDecorator() = delete;
  explicit SquadCompositeCombatDecorator(const std::shared_ptr<SquadComposite>& squad);

  std::shared_ptr<SquadComposite> GetSquadPtr() override;

  bool GetSelfHealing() override;
  bool GetSelfShieldRecover() override;
  bool GetExtraHealing(int hp) override;
  bool GetExtraShield(int shield) override;

  void AddSquad(const std::shared_ptr<SquadComposite>& squad) override;
  void AddUnit(const std::shared_ptr<Unit>& unit) override;
  void GetUnits(std::unordered_set<std::shared_ptr<Unit>>& units) const override;

 private:
  std::shared_ptr<SquadComposite> squad_;
};