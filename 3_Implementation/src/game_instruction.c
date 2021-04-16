#include "tic_tac_toe.h"

// Displays few instructions about how to play, how to win and some information about the game.

void Game_instructions(){
    printf("\n\n||============ Welcome to Tic Tac Toe Game ==========||\n\n");
	printf("--> The Board is as shown below\n--> Choose a cell for your chance\n\n");
    
    printf(" _____ _____ _____\n");
    printf("|     |     |     |\n");
    printf("|  1  |  2  |  3  |\n");

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  4  |  5  |  6  |\n");

    printf("|_____|_____|_____|\n");
    printf("|     |     |     |\n");

    printf("|  7  |  8  |  9  |\n");

    printf("|_____|_____|_____|\n\n");

    printf("--> You win when you match any row, column or any diagonal\n");
    printf("--> The speciality of the game is, most of the times it ends in a draw which makes it futile\n\n");
    printf("OKAY COME ON LET'S PLAY\n\n");
}
