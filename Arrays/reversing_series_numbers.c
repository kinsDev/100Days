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
    int a[N];//array with ten elements
    int i;//loop through the elements

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]); //we are reading the looped data into the array a
    }

    printf("In recerse order: ");
    for(i = N - 1; i >= 0; i--){
        printf("%d", a[i]); // writes/ outputs the read data
        printf("\n");
    }

    return 0;
}