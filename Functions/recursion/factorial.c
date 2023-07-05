/**
 * C program to calculate the factorial of a number using recursion
 */

#include <stdio.h>

int factorial_01(int n)
{
    if(n == 0)
    {
        return 1; // fasle, error
    }else
    {
        return (factorial_01(n-1)*n);//formula to calculate factorial
    }
}

int main(void)
{
    int a, fact;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &a);

    fact = factorial_01(a);

    printf("Factorial of %d = %d", a, fact);

    return 0;
}