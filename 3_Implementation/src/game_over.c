#include"tic_tac_toe.h"

bool game_Over(char *board){
    return(row_Crossed((char *)board) || column_Crossed((char *)board) || diagonal_Crossed((char *)board) );
}
