/**
 * @file chess.h
 * @author Jack Davenport
 * @brief Header file for my chess object
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 */
#pragma once
#include <vector>
#include "Piece.h"
using namespace std;

class Chess {
    public:
        //default constructor
        Chess();

        //Public setter function so that Piece objects can change the turn
        void change_turn() { turn = ~turn; };



    private:
        /** 
        * holds whether or not a piece exists at that spot. If piece does not exist then holds -1
        * If a piece does exist then the value at that square indicates which piece it is
        * 0: pawn
        * 1: bishop
        * 2: knight
        * 3: rook
        * 4: Queen
        * 5: King
        */
        vector< vector<int> > board; 
        
        bool turn; //true if it is white's turn, false for black's

};