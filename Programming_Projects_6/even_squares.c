/**
 * Write a program that prompts the user to enter a number n, then prints all even squares
between 1 and n. For example, if the user enters 100. the program should print the following:
4
16
36
64
100
*/
#include <stdio.h>
int main(void)
{
    int n, square, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; (square = i * i) <= n; i++){
        if(square % 2 == 0){
            printf("%d\n", square);
        }
    }

    return 0;
}