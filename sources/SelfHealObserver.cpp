#include <headers/SelfHealObserver.h>

void SelfHealObserver::Handle(std::shared_ptr<Game> game) {
  if (handled_squad_ != game->total_squad_) {
    handled_squad_ = game->total_squad_;
    command_.SetSquad(game->total_squad_);
  }

  command_.DoCommand();
}
