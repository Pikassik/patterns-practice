#pragma once
#include <headers/Unit.h>
#include <headers/factories/WhiteFactory.h>
#include <headers/factories/BlackFactory.h>

class Board : public std::enable_shared_from_this<Board> {
  friend class BoardTest;
 public:
  Board();
  void FillBoard();
  bool IsEmpty(const std::pair<int, int>& position) const;
  bool IsBlack(const std::pair<int, int>& position) const;
  bool Move(const std::pair<int, int>& from,
            const std::pair<int, int>& to);
  bool Attack(const std::pair<int, int>& from,
              const std::pair<int, int>& to);
  bool Damage(const std::pair<int, int>& position, int hp);
  bool Heal(const std::pair<int, int>& position, int hp);
  std::shared_ptr<Unit> GetUnit(const std::pair<int, int>& position);
  std::vector<std::shared_ptr<Unit>> GetUnits();
  const std::vector<std::vector<std::shared_ptr<Unit>>>& GetBoard();
 private:
  std::vector<std::vector<std::shared_ptr<Unit>>> board_;
};