/**
 * @file piece.h
 * @author your name (you@domain.com)
 * @brief Header file for an abstract piece object
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 */

#pragma once

using namespace std;
class Piece {
    public:
        //default constructor
        Piece();
        //returns coordinates for where the piece moved
        virtual pair move(int dir);



    private:
        /**
         * If this piece is still on the board, this value holds which one this piece is
         * If the piece is not on the board this value becomes -1
         * 0: pawn
         * 1: bishop
         * 2: knight
         * 3: rook
         * 4: Queen
         * 5: King
         */
        int value;



};