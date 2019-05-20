#pragma once
#include <headers/GameObserver.h>

class Game;
class BoardConsoleViewObserver : public GameObserver {
  friend class ObserversTest;
 public:
  ~BoardConsoleViewObserver() override = default;
  void Handle(std::shared_ptr<Game> game) override;
};
