#include <stdio.h>


int tablenumber(int pplnmbr){
    if (pplnmbr <= 2){
        return 1;
    } else if (pplnmbr > 2 && pplnmbr <= 4){
        return 2;
    } else if (pplnmbr > 4 && pplnmbr <= 8){
        return 3;
    } else{
        return 5;
    }
}
