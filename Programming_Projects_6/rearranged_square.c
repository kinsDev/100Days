/**
Rearrange the square3 .c program so that the for loop initializes i, tests i. and incre¬
ments i. Don’t rewrite the program: in particular, don't use any multiplications.
*/

#include <stdio.h>
int main(void)
{
    int i = 1, n, square = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; square <= n; square += (2 * i) + 1)
    {
        printf("%d\n", square);
        i++;
    }

    return 0;
}