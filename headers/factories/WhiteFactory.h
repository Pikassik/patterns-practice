#pragma once
#include <headers/SideFactory.h>
#include <headers/Director.h>
#include <headers/white-builders/WhiteBishopBuilder.h>
#include <headers/white-builders/WhiteKingBuilder.h>
#include <headers/white-builders/WhiteKnightBuilder.h>
#include <headers/white-builders/WhitePawnBuilder.h>
#include <headers/white-builders/WhiteQueenBuilder.h>
#include <headers/white-builders/WhiteRookBuilder.h>

class WhiteFactory : public SideFactory {
 public:
  std::shared_ptr<Bishop> CreateBishop() override;
  std::shared_ptr<King> CreateKing() override;
  std::shared_ptr<Knight> CreateKnight() override;
  std::shared_ptr<Pawn> CreatePawn() override;
  std::shared_ptr<Queen> CreateQueen() override;
  std::shared_ptr<Rook> CreateRook() override;
};