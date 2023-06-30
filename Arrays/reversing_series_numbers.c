/**
Reversing a Series of Numbers

Our first array program prompts the user to enter a series of numbers, then writes
the numbers in reverse order:

Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
In reverse order: 31 50 11 23 94 7 102 49 82 34
*/

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N];//number of elements in array
    int i;//array position

    printf("Enter %d numbers: ", N);//storing numbers in the array as they read
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);//reads into array a as it increments
    }

    printf("In reverse order: ");
    for(i = N - 1; i >= 0; i--)
    { // basically picking the listed numbers from the last one to the first one
        printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}