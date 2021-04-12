
#include "tic_tac_toe.h"

void Start_Game(int Turn){
    char board[SIDE][SIDE];
    int moves[SIDE*SIDE];
    //Initialize_Game((char *)board, moves);
    Game_instructions();
     
    int Index = 0, x, y;
    do {
        if (Turn == CPU)
        {
            x = moves[Index] / SIDE;
            y = moves[Index] % SIDE;
            board[x][y] = CPUMOVE;
            printf("COMPUTER has put a %c in cell %d\n", CPUMOVE, moves[Index]+1);
            Display_TicTacToe_Board((char *)board);
            Index ++;
            Turn = PLAYER;
        }
         
        else if (Turn == PLAYER)
        {
            x = moves[Index] / SIDE;
            y = moves[Index] % SIDE;
            board[x][y] = PLAYERMOVE;
            printf ("HUMAN has put a %c in cell %d\n", PLAYERMOVE, moves[Index]+1);
            Display_TicTacToe_Board((char *)board);
            Index ++;
            Turn = CPU;
        }
    }while (game_Over((char *)board) == false &&  Index != SIDE*SIDE);

    if (game_Over((char *)board) == false && Index == SIDE * SIDE)
        printf("Match Drawn\n");
    else
    {
        if (Turn == CPU)
            Turn = PLAYER;
        else if (Turn == PLAYER)
            Turn = CPU;
        Declare_Winner(Turn);
    }
    return;
}