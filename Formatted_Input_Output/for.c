/**The for statement is basically
 * for (expr1; expr2; expr3) statement
 * It can be used to write many loops
*/

/**
 * EXAMPLE
*/
#include <stdio.h>
int main(void)
{
    int i;

    for(i = 10; i > 0; i--){
        printf("T minus and counting: %d\n", i);
    }

    return 0;
}