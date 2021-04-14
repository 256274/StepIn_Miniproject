#include "tic_tac_toe.h"

void Declare_Winner(int Turn){
    if (Turn == CPU)
        printf("COMPUTER won the Match\n\n");
    else
        printf("User won the Match!!!!\n\n");
    return;
}
