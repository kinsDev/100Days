/**
 * Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. Him: See the upc. c program of Section 4.1
*/

#include<stdio.h>
int main(void)
{
    int i, j, k;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The reversed number is: %1d%1d%1d", k, j, i);

    return 0;
}