/**
 * As a second example, let’s trace the execution of the following statements,
which display a series of "countdown” messages
*/
#include <stdio.h>
int main(void)
{
    int i=10;

    while (i > 0) {
        printf("T minus %d and counting\n", i--);
    }

    return 0;
}