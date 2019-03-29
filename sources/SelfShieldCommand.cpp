#include <headers/SelfShieldCommand.h>

void SelfShieldCommand::DoCommand() {
  squad_->GetSelfShieldRecover();
}

void SelfShieldCommand::SetSquad(std::shared_ptr<SquadComposite> squad) {
  squad_ = squad;
}

