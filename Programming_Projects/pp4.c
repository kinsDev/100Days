/**
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>

int main(void){
    float money, tax, amount;

    printf("Untaxed Amount:$ ");
    scanf("%f", &money);

    tax = 0.05f;
    amount = money + (tax * money);
    printf("Current Taxed Amount: $%.2f\n", amount);

    return 0;
}