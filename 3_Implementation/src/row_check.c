#include "tic_tac_toe.h"

bool row_Crossed(char *board){
    for (int i=0; i<SIDE; i++)
    {
        if (*((board+i)+0) == *((board+i)+1) &&
            *((board+i)+1) == *((board+i)+2) && 
            *((board+i)+0) != ' ')
            return (true);
    }
    //=============else false=========
    return(false);
}