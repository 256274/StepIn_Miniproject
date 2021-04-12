#include "tic_tac_toe.h"

void Initialize_Game(char *board, int moves[]){
    srand(time(NULL));

    for (int i=0; i<SIDE; i++)
    {
        for (int j=0; j<SIDE; j++)
        {
            *((board+i*SIDE)+j) = ' ';
        }
    }
    for (int i=0; i<SIDE*SIDE; i++)
        moves[i] = i;
    return;
}
