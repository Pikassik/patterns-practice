#pragma once
#include <headers/GameObserver.h>
#include <headers/SelfHealCommand.h>
#include <headers/SelfShieldCommand.h>


class SelfShieldObserver : public GameObserver {
 public:
  friend class ObserversTest;
  void Handle(std::shared_ptr<Game> game) override;
 private:
  std::shared_ptr<SquadComposite> handled_squad_;
  SelfShieldCommand command_;
};