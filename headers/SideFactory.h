#pragma once
#include <headers/common-figures/Bishop.h>
#include <headers/common-figures/King.h>
#include <headers/common-figures/Knight.h>
#include <headers/common-figures/Pawn.h>
#include <headers/common-figures/Queen.h>
#include <headers/common-figures/Rook.h>

class SideFactory {
 public:
    virtual std::shared_ptr<Bishop> CreateBishop() = 0;
    virtual std::shared_ptr<King> CreateKing() = 0;
    virtual std::shared_ptr<Knight> CreateKnight() = 0;
    virtual std::shared_ptr<Pawn> CreatePawn() = 0;
    virtual std::shared_ptr<Queen> CreateQueen() = 0;
    virtual std::shared_ptr<Rook> CreateRook() = 0;
};