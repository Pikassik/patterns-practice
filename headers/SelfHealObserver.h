#pragma once
#include <headers/GameObserver.h>
#include <headers/SelfHealCommand.h>

class SelfHealObserver : public GameObserver {
  friend class ObserversTest;
 public:
  void Handle(std::shared_ptr<Game> game) override;
 private:
  std::shared_ptr<SquadComposite> handled_squad_;
  SelfHealCommand command_;
};