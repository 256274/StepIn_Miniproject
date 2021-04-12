#include "tic_tac_toe.h"

void Declare_Winner(int whoseTurn){
    if (whoseTurn == CPU)
        printf("COMPUTER has won\n");
    else
        printf("HUMAN has won\n");
    return;
}