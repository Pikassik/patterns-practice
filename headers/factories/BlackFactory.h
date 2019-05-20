#pragma once
#include <headers/SideFactory.h>
#include <headers/Director.h>
#include <headers/black-builders/BlackBishopBuilder.h>
#include <headers/black-builders/BlackKingBuilder.h>
#include <headers/black-builders/BlackKnightBuilder.h>
#include <headers/black-builders/BlackPawnBuilder.h>
#include <headers/black-builders/BlackQueenBuilder.h>
#include <headers/black-builders/BlackRookBuilder.h>

class BlackFactory : public SideFactory {
 public:
  std::shared_ptr<Bishop> CreateBishop() override;
  std::shared_ptr<King> CreateKing() override;
  std::shared_ptr<Knight> CreateKnight() override;
  std::shared_ptr<Pawn> CreatePawn() override;
  std::shared_ptr<Queen> CreateQueen() override;
  std::shared_ptr<Rook> CreateRook() override;
};