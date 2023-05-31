/**
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
Hint: Divide the amount by 20 to determine the number of$20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
integer values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void){
    int dollar, bills, twenty, ten, five, one;

    printf("Enter US dollar amount: $");
    scanf("%d", &dollar);

    twenty = dollar / 20;
    dollar = dollar % 20;

    ten = dollar / 10;
    dollar = dollar % 10;

    five = dollar / 5;
    dollar = dollar % 5;

    one = dollar / 1;
    dollar = dollar % 1;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}