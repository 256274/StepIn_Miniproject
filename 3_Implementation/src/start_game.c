
#include "tic_tac_toe.h"

void Play_Game(int Turn){
    char board[SIDE][SIDE];
    int moves[SIDE*SIDE];

    void (*fptr)();         // Function pointer
    initialize_Game(board, moves);
    fptr = Game_instructions;
    fptr();
     
    int Index = 0, r_index, c_index, row=0, column=0, diagonal=0;


    while ((row!=1 && column!=1 && diagonal!=1) &&  Index != SIDE*SIDE){
        if (Turn == CPU)
        {
            r_index = moves[Index] / SIDE;
            c_index = moves[Index] % SIDE;
            board[r_index][c_index] = CPUMOVE;
            printf("COMPUTER chose put a %c in cell %d\n", CPUMOVE, moves[Index]+1);
            Display_TicTacToe_Board(board);
            Index ++;
            Turn = PLAYER;
        }
         
        else if (Turn == PLAYER)
        {
            r_index = moves[Index] / SIDE;
            c_index = moves[Index] % SIDE;
            board[r_index][c_index] = PLAYERMOVE;
            printf ("User chose put a %c in cell %d\n", PLAYERMOVE, moves[Index]+1);
            Display_TicTacToe_Board(board);
            Index ++;
            Turn = CPU;
        }
        // check rows
         for (int i=0; i<SIDE; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            row = 1;
    }
    // check columns

    for (int i=0; i<SIDE; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            column=1;
    }

    //check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][1] != ' ')
     diagonal=1;

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
     diagonal=1;;
    }

    if ((row!=1 && column!=1 && diagonal!=1) && Index == SIDE * SIDE)
        printf("Match Drawn\n\n");
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
