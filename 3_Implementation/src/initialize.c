#include "tic_tac_toe.h"

void Initialize_Game(char *board, int moves[]){
    srand(time(NULL));

    for (int i=0; i<SIDE; i++)
    {
    	//*****For Each cell*****//
        for (int j=0; j<SIDE; j++)
        {
        //=====Intial There is No Any Run So it is Blank===//
            *((board+i*SIDE)+j) = ' ';
        }
    }
        //====With Our Chance=============
    for (int i=0; i<SIDE*SIDE; i++)
        moves[i] = i;
    //std::random_shuffle(moves, moves + SIDE*SIDE);
    return;
}