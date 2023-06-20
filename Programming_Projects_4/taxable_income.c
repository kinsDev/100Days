/**
 * In one state, single residents are subject to die following income tax:
Income
Not over $750      1% of income
$750-$2.250        $7.50 plus 2% of amount over $750
$2,250-53.750      $37.50 plus 3% of amount over $2,250
$3,750-55.250      $82.50 plus 4% of amount over $3,750
$5,250-$7.000      $142.50 plus 5% of amount over $5,250
Over $7,000        $230.00 plus 6% of amount over $7,000

Write a program that asks the user to enter the amount of taxable income, then displays the
tax due.
*/
#include <stdio.h>
int main(void)
{
    float income;

    printf("Enter amount of income to claculate taxable income: ");
    scanf("%f", &income);

    if (income < 750)
    {
        printf("Taxable Income: %.2f", 0.01f * (income));
    }else if (income >= 750 && income < 2250)
    {
        printf("Taxable Income: %.2f", 7.50f + 0.02 * (income - 750));
    }else if (income >= 2250 && income < 3750)
    {
        printf("Taxable Income: %.2f", 37.50f + 0.03 * (income - 2250));
    }else if (income >= 3750 && income < 5250)
    {
        printf("Taxable Income: %.2f", 82.50f + 0.04 * (income - 3750));
    }else if (income >= 5250 && income < 7000)
    {
        printf("Taxable Income: %.2f", 142.50f + 0.05 * (income - 5250));
    }else{
        printf("Taxable Income: %.2f", 230.00f + 0.06 * (income - 7000));
    }

    return 0;
}