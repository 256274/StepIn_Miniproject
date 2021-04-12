#include "tic_tac_toe.h"

bool row_Crossed(char *board){
    for (int i=0; i<SIDE; i++)
    {
        if (*((board+i)+0) == *((board+i)+1) && *((board+i)+1) == *((board+i)+2))
            return (true);
    }
    return(false);
}