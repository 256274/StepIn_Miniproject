#include"tic_tac_toe.h"

bool game_Over(char board[][SIDE]){
    return(row_Crossed(board) || column_Crossed(board) || diagonal_Crossed(board) );
}
