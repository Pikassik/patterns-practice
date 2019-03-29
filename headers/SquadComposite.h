#pragma once
#include <headers/Unit.h>
#include <unordered_set>

class SquadComposite : public std::enable_shared_from_this<SquadComposite> {
 public:
  virtual std::shared_ptr<SquadComposite> GetSquadPtr();


  virtual bool GetSelfHealing();
  virtual bool GetSelfShieldRecover();
  virtual bool GetExtraHealing(int hp);
  virtual bool GetExtraShield(int shield);

  virtual void AddSquad(const std::shared_ptr<SquadComposite>& squad);
  virtual void AddUnit(const std::shared_ptr<Unit>& unit);
  virtual void GetUnits(std::unordered_set<std::shared_ptr<Unit>>& units) const;
  virtual bool RemoveUnit(const std::shared_ptr<Unit>& unit);

 private:
  std::vector<std::shared_ptr<SquadComposite>> children_;
  std::unordered_set<std::shared_ptr<Unit>> units_;
};