#include "tic_tac_toe.h"

void Declare_Winner(int Turn){
    if (Turn == CPU)
        printf("COMPUTER has won\n");
    else
        printf("User has won\n");
    return;
}