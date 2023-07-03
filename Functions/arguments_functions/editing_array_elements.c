/**
 * Another important thing to know is that a function is allowed to change the
elements of an array parameter, and the change is reflected in the corresponding
argument.

For example, the following function modifies an array by storing zero
into each of its elements
*/

#include <stdio.h>

void store_zeros(int a[], int n) // function with two parameters, an array and length
{
    int i; // is used to iterate over the length

    for(i = 0; i < n; i++)
    {
        a[i] = 0; //elements of array a are replaced with i which is equal to zero
    }
}

#define LEN 200

//The call
int main(void)
{
    int b[LEN], j;

    printf("Enter the elements of the array: \n");
    for(j = 0; j < LEN; j++)
    {
        scanf("%d", &b[j]);// a for loop is used to enter user's elements is array using scanf
    }

    store_zeros(b, 50);//calling store_zeros function using array b and its length LEN as arguments

    printf("Array after storing zeros:\n");
    for(j = 0; j < LEN; j++)
    {
        printf("%d", b[j]);
    }
    printf("\n");

    return 0;
}