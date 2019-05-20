#include <headers/SelfHealCommand.h>

void SelfHealCommand::DoCommand() {
  squad_->GetSelfHealing();
}

void SelfHealCommand::SetSquad(std::shared_ptr<SquadComposite> squad) {
  squad_ = squad;
}
