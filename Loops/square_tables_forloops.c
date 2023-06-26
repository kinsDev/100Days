/**
 * The square.c program (Section 6.1) can be improved by converting its while
loop to a for loop:
*/

#include <stdio.h>
int main(void)
{
    int i, n;

    printf("Enter number of columns: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\t%d\n", i, i * i);
    }
    
    return 0;
}