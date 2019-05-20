#pragma once
#include <headers/GameObserver.h>
#include <unordered_map>
#include <headers/Unit.h>
#include <unordered_set>

class BattleObserver : public GameObserver {
 public:
  friend class ObserversTest;
  void Handle(std::shared_ptr<Game> game) override;
 private:
  std::unordered_map<std::shared_ptr<Unit>, int> inactive_days;
};