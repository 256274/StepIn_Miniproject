#include "tic_tac_toe.h"

bool column_Crossed(char *board){
    for (int i=0; i<SIDE; i++)
    {
        if (*((board+0)+i) == *((board+1)+i) && *((board+1)+i) == *((board+2)+i))
            return (true);
    }
    return(false);
}