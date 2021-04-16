#include "tic_tac_toe.h"

// Shows the winner's name

void Declare_Winner(int Turn){
    if (Turn == CPU)
        printf("COMPUTER won the Match\n\n");
    else
        printf("Hurray!!! User won the Match\n\n");
    return;
}
