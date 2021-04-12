#include "tic_tac_toe.h"

void Display_TicTacToe_Board(char *board){
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", *((board+0)+0), *((board+0)+1), *((board+0)+2));

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", *((board+1)+0), *((board+1)+1), *((board+1)+2));

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", *((board+2)+0), *((board+2)+1), *((board+2)+2));

    printf("     |     |     \n\n");
}
