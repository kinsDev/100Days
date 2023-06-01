/**
 * Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
a percentage and divide it by 12
*/

#include <stdio.h>

int main(void){
    float interestRate, monthlyPayment, loan;
    float balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate /= 100;

    balance = loan;

    balance -= monthlyPayment;
    balance += balance * (interestRate / 12);

    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance -= monthlyPayment;
    balance += balance * (interestRate / 12);

    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance -= monthlyPayment;
    balance += balance * (interestRate / 12);

    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}