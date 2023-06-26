/**
 * In a do statement, the loop body is executed first, 
 * then the expression is tested.
 * In a while statement the expression is evaluated first,
 * then the loop body is executed
*/

/** do statement while (expression); */

/**Lets rewrite the countdown statement using a do statement*/

/**
 * STEPS!
 * statement to execute first
 * expression for evaluation
*/

#include <stdio.h>
int main(void)
{
    int n;

    n = 10;

    do{
        printf("T minus and countdown: %d\n", n--);
    } while (n > 0);

    return 0;
}