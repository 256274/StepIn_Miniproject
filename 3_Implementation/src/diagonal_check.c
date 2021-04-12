#include "tic_tac_toe.h"

bool diagonal_Crossed(char *board){
    if(*((board+0)+0) == *((board+1)+1) && *((board+1)+1) == *((board+2)+2))
     return(true);

    if(*((board+0)+2) == *((board+1)+1) && *((board+1)+1) == *((board+2)+0))
     return(true);
}