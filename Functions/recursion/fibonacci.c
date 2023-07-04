/**
 * Here is a simple C program to print the Fibonacci series using direct recursion.
 */

#include <stdio.h>

int fibonacci(int n)
{
    //base case
    if(n <= 1)
    {
        return n;
    }

    //recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);

}

int main(void)
{
    int limit;

    printf("Enter the limit of the fibonacci series: ");
    scanf("%d", &limit);

    for(int i = 0; i < limit; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    printf("\n");

    return 0;
}