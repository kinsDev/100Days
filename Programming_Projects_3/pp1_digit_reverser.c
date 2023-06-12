/**
 * Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
Read the number using %d. then break it into two digits. Hint: If n is an integer, then n % 10
is the last digit in n and n / 10 is n with the last digit removed.
*/
#include <stdio.h>
int main(void)
{
    int n; 

    printf("Enter a two-digit number: ");/**First of all am accepting an integer n*/
    scanf("%d", &n);

    int i = n % 10; /*Selecting the last part*/
    int j = n / 10;/*Selecting the first part*/

    printf("The value of last part is : %d\n", i);/*Result of last part of digit*/
    printf("The value of first part is : %d\n", j);/*Result of first part of digit*/

    /*After we have the two part of the digits, how do we reverse those two parts?*/
    /**/
    printf("The reversal is: %d%d", i, j);

    return 0;
}