/**
 * @file main.cpp
 * @author Jack Davenport (you@domain.com)
 * @brief At home attempt at an Implementation of Chess 
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022 lmao this line makes it seem super official
 */
#include <iostream>
#include "Chess.h"
#include "Piece.h"

using namespace std;

int main() {
    Chess myGame;
    myGame.print_board();
    myGame.print_turn();
    
    return 0;
}