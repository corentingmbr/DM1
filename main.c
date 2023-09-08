#include <stdio.h>
#include "fonctions.c"
int pplnumber;
int tablenum;

int main() {
    printf("How many are you ?\n");
    scanf("%d",&pplnumber);
    tablenum = tablenumber(pplnumber);
    printf("Your table is the number: %d",tablenum);
    return 0;
}
