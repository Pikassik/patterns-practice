#include <headers/BattleObserver.h>

void BattleObserver::Handle(std::shared_ptr<Game> game) {
  std::unordered_set<std::shared_ptr<Unit>> units;
  game->battle_squad_->GetUnits(units);
  for (auto& unit: units) {
    if (inactive_days[unit] == 2) {
      game->battle_squad_->RemoveUnit(unit);
      game->inactive_squad_->AddUnit(unit);
    } else {
      ++inactive_days[unit];
    }
  }
}

