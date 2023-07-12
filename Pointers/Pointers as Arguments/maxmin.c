/*
To illustrate how pointers are passed to functions, let’s look at a function named
max_min that finds the largest and smallest elements in an array. 

When we call max_min, we’ll pass it pointers to two variables; 
max_min will then store its answers in these variables. 

max_min has the following prototype:
void max_min(int a[], int n, int *max, int *min);

A call of max_min might have the following appearance:
max_min(b, N, &big, &small);

b is an array of integers; N is the number of elements in b. big and small are
ordinary integer variables. 

When max_min finds the largest element in b, it stores
the value in big by assigning it to *max. 
(Since max points to big. an assignment to *max will modify the value of big.) 

max_min stores the smallest element of b in small by assigning it to *min.

To test max_min, we’ll write a program that reads 10 numbers into an array,
passes the array to max_min, and prints the results:
*/

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min)
{
    int i; // the values we are looping through

    *max = *min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}

int main(void)
{
    int b[N], big, small, i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }
    max_min(b, N, &big, &small);

    printf("Biggest value: %d\n", big);
    printf("Smallest value: %d\n", small);

    return 0;
}