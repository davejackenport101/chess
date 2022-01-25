/**
 * @file chess.cpp
 * @author Jack Davenport (you@domain.com)
 * @brief Source code for my chess object
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 */

#include "Chess.h"
using namespace std;

//Initializes the chess board to start a game
Chess::Chess() {
    turn = true;

    //Place pieces on the board to initialize all squares as either empty or with correct piece
    for (unsigned i = 0); i < 8; i++) {
        board.push_back(vector<int>);
        for (unsigned j = 0; j < 8; j++) {
            //pawns
            if (i == 1 || i == 6) {
                board[i].push_back(0);
            }
            //specialty pieces
            if (i == 0 || i == 7) {
                if (j == 0 || j == 7) board[i].push_back(3);
                if (j == 1 || j == 6) board[i].push_back(2);
                if (j == 2 || j == 5) board[i].push_back(1);
                if (j == 3) board[i].push_back(5);
                if (j == 4) board[i].push_back(4);
            }
            //middle of the board
            else board.push_back(-1);
        }
    }
}