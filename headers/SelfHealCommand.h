#pragma once
#include <headers/SquadComposite.h>

class SelfHealCommand {
 public:
  void DoCommand();
  void SetSquad(std::shared_ptr<SquadComposite> squad);
 private:
  std::shared_ptr<SquadComposite> squad_;
};