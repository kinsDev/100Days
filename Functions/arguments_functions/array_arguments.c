/**
 *Arrays are often used as arguments. When a function parameter is a one-dimen¬
sional array, the length of the array can be (and is normally) left unspecified:

The following function illustrates the use of one-dimensional array arguments.
When given an array a of int values, sum_array returns the sum of the ele¬
ments in a. Since sum_array needs to know the length of a, we must supply it
as a second argument.
*/
#include <stdio.h>

int sum_array(int a[], int n) // function sum array has parameters; array a and int n
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum += a[i]; // elements in array a and adding them together to get sum 
    }
    return sum; // we are returning because our function is not void

}

// When sum_array is called, the first argument will be the name of an array,
// and the second will be its length.

#define LEN 100

int main(void)
{
    int b[LEN], total, j;

    for(j = 0; j < LEN; j++)
    {
        scanf("%d", &b[j]); // using scanf to read int i to each element of array b
    }

    total = sum_array(b, LEN); // sum_array function is called with the array b and length LEN
    // total is used tp print the sum of the array
    printf("Sum of the array: %d\n", total);

    return 0;
}