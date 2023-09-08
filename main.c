#include <stdio.h>
#include "fonctions.c"
int pplnumber;
int tablenum;
int drink;
int result_drink;
double price = 0;
int eat;

int main() {
    printf("How many are you ?\n");
    scanf("%d",&pplnumber);
    tablenum = tablenumber(pplnumber);
    printf("Your table is the number: %d\n",tablenum);
    printf("Now that you're installed do you want to drink something ? enter 1 for yes or 2 for no\n");
    scanf("%d",&drink);
    if(drink == 1 ){
        printf("enter s for a soda, w for water or l for lemonade:\n ");
        scanf("%d",result_drink);
        if(result_drink == 's'){
            price = price + 5;
        }else if (result_drink == 'w'){
            price = price + 2;
        }else if (result_drink == 'l'){
            price = price + 12;
        }else printf("an error occured\n");
    }
   else printf("so let's move on the main course !\n");

   printf( "Ok,so you have the choice between entering : c for a couscous, t for Tomatoes or R for a risotto ? Which one do you want to eat ?\n");
   scanf("%d",&eat);
   if(eat== 'c'){
       price = price +15;
   }else if(eat == 't' ){
       price = price + 8;
   }else if( eat == 'r'){
       price = price + 23;
   }else printf("I guess there is nothing that is to your taste...\n ");




    return 0;
}
