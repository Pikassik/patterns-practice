#pragma once
#include <tests/SetterCmp.h>

void IsBishop(const std::shared_ptr<Unit>& got_unit);
void IsKing(const std::shared_ptr<Unit>& got_unit);
void IsKnight(const std::shared_ptr<Unit>& got_unit);
void IsPawn(const std::shared_ptr<Unit>& got_unit);
void IsQueen(const std::shared_ptr<Unit>& got_unit);
void IsRook(const std::shared_ptr<Unit>& got_unit);
