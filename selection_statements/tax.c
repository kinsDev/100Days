/**
 * In one state, single residents are subject to die following income tax:
Income
Not over $750
$750-$2.250
$2,250-53.750
$3,750-55.250
$5,250-$7.000
Over $7,000
Amount oftax
I % of income
$7.50 plus 2% of amount over $750
$37.50 plus 3% of amount over $2,250
$82.50 plus 4% of amount over $3,750
$142.50 plus 5% of amount over $5,250
$230.00 plus 67c of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.
*/

#include <stdio.h>

int main(void)
{
    double income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%lf", &income);

    if (income <= 750)
    {
        tax = 0.01 * income;
    }
    else if (income <= 2250)
    {
        tax = 7.50 + 0.02 * (income - 750);
    }
    else if (income <= 53750)
    {
        tax = 37.50 + 0.03 * (income - 2250);
    }
    else if (income <= 55250)
    {
        tax = 82.50 + 0.04 * (income - 3750);
    }
    else if (income <= 7000)
    {
        tax = 142.50 + 0.05 * (income - 5250);
    }
    else
    {
        tax = 230.00 + 0.07 * (income - 7000);
    }

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
