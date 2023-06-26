/**
 * We can use this program to illustrate an important point about the for state¬
ment: C places no restrictions on the three expressions that control its behavior.
Although these expressions usually initialize, test, and update the same variable,
there’s no requirement that they be related in any way. Consider the following ver¬
sion of the same program:
*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
