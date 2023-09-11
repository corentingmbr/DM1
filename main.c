#include <stdio.h>
#include "fonctions.c"

int main() {
    int pplnumber;
    int tablenum;
    int drink;
    char result_drink;
    double price = 0;
    char eat;
    char dessert;

    printf("How many are you?\n");
    scanf("%d", &pplnumber);
    tablenum = tablenumber(pplnumber);
    printf("Your table is the number: %d\n", tablenum);

    printf("Now that you're seated, do you want to drink something? Enter 1 for yes or 2 for no\n");
    scanf("%d", &drink);

    if (drink == 1) {
        printf("Enter 's' for a soda, 'w' for water, or 'l' for lemonade:\n ");
        scanf(" %c", &result_drink);

        if (result_drink == 's') {
            price += 5;
        } else if (result_drink == 'w') {
            price += 2;
        } else if (result_drink == 'l') {
            price += 12;
        } else {
            printf("An error occurred\n");
        }
    } else {
        printf("So let's move on to the main course!\n");
    }

    printf("OK, so you have the choice between entering 'c' for a couscous, 't' for tomatoes, or 'r' for a risotto. What do you want to eat?\n");
    scanf(" %c", &eat);

    if (eat == 'c') {
        price += 15;
    } else if (eat == 't') {
        price += 8;
    } else if (eat == 'r') {
        price += 23;
    } else {
        printf("I guess there is nothing that suits your taste...\n");
    }

    printf("So to end your meal, what would you like for dessert? You have the choice between 't' for tiramisu, 'g' for ice cream, or 'm' for macarons!\n");
    scanf(" %c", &dessert);

    if (dessert == 't') {
        price += 62;
    } else if (dessert == 'g') {
        price += 3;
    } else if (dessert == 'm') {
        price += 8;
    } else {
        printf("I understand it seems like you've already eaten a lot...\n");
    }
    price *= pplnumber;

    printf("Total price: %.2lf$\n", price);

    return 0;
}
