#include "tic_tac_toe.h"

// assigns spaces to each cell and randomizes the indices or cell numbers 

void initialize_Game(char (*board)[SIDE], int moves[]){
    srand(time(NULL));

    int k, temp;

    for (int i=0; i<SIDE; i++)
    {
        for (int j=0; j<SIDE; j++)
            board[i][j] = ' ';
    }
    for (int i=0; i<SIDE*SIDE; i++)
        moves[i] = i;

    for(int i=0; i<SIDE*SIDE; i++){
        k=(rand()%8)+1;

        temp=moves[i];
        moves[i]=moves[k];
        moves[k]=temp;
    }
    return;
}
