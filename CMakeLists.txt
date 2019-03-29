cmake_minimum_required(VERSION 3.12)
project(creational_patterns)

set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})



include_directories(${CMAKE_CURRENT_SOURCE_DIR})




add_executable(creational_patterns main.cpp headers/Board.h
                headers/Unit.h sources/Board.cpp sources/figures/Unit.cpp
                headers/common-figures/King.h headers/common-figures/Rook.h
                headers/common-figures/Bishop.h headers/common-figures/Queen.h
                headers/common-figures/Pawn.h sources/figures/Bishop.cpp
                sources/figures/King.cpp
        sources/figures/Queen.cpp sources/figures/Rook.cpp
                headers/common-figures/Knight.h sources/figures/Knight.cpp
                headers/black-figures/BlackBishop.h
                headers/black-figures/BlackKing.h
                headers/black-figures/BlackKnight.h
                headers/black-figures/BlackPawn.h
                headers/black-figures/BlackQueen.h
                headers/black-figures/BlackRook.h
                headers/white-figures/WhiteBishop.h
                headers/white-figures/WhiteKing.h
                headers/white-figures/WhiteKnight.h
                headers/white-figures/WhitePawn.h
                headers/white-figures/WhiteQueen.h
                headers/white-figures/WhiteRook.h sources/figures/BlackPawn.cpp
                sources/figures/WhitePawn.cpp headers/UnitBuilder.h
                sources/builders/UnitBuilder.cpp
                headers/common-builders/BishopBuilder.h
                sources/builders/BishopBuilder.cpp
                headers/common-builders/KingBuilder.h
                sources/builders/KingBuilder.cpp
                headers/common-builders/KnightBuilder.h
                sources/builders/KnightBuilder.cpp
                headers/common-builders/PawnBuilder.h
                sources/builders/PawnBuilder.cpp
                headers/common-builders/QueenBuilder.h
                sources/builders/QueenBuilder.cpp
                headers/common-builders/RookBuilder.h
                sources/builders/RookBuilder.cpp
                headers/black-builders/BlackBishopBuilder.h
                headers/black-builders/BlackKingBuilder.h
                headers/black-builders/BlackKnightBuilder.h
                headers/black-builders/BlackPawnBuilder.h
                headers/black-builders/BlackQueenBuilder.h
                headers/black-builders/BlackRookBuilder.h
                sources/builders/BlackBishopBuilder.cpp
                sources/builders/BlackRookBuilder.cpp
                sources/builders/BlackKingBuilder.cpp
                sources/builders/BlackQueenBuilder.cpp
                sources/builders/BlackPawnBuilder.cpp
                sources/builders/BlackKnightBuilder.cpp
                headers/white-builders/WhiteBishopBuilder.h
                headers/white-builders/WhiteKingBuilder.h
                headers/white-builders/WhiteKnightBuilder.h
                headers/white-builders/WhitePawnBuilder.h
                headers/white-builders/WhiteQueenBuilder.h
                headers/white-builders/WhiteRookBuilder.h
                sources/builders/WhiteBishopBuilder.cpp
                sources/builders/WhiteKingBuilder.cpp
                sources/builders/WhiteKnightBuilder.cpp
                sources/builders/WhitePawnBuilder.cpp
                sources/builders/WhiteQueenBuilder.cpp
                sources/builders/WhiteRookBuilder.cpp
                headers/Director.h sources/builders/Director.cpp
                headers/SideFactory.h headers/factories/WhiteFactory.h
                headers/factories/BlackFactory.h
                sources/factories/WhiteFactory.cpp
                sources/factories/BlackFactory.cpp tests/FiguresPossibleTest.cpp tests/SetterTest.cpp tests/BuildTest.cpp tests/SetterCmp.h tests/SetterCmp.cpp tests/FactoryTest.cpp tests/IsFigure.h tests/IsFigure.cpp tests/BoardTest.cpp)

target_link_libraries(creational_patterns ${GTEST_LIBRARIES} pthread)