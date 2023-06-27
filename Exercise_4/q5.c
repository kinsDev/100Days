/**
Rewrite the following loop so that its body is empty:
for (n = 0; m > 0; n++)
m /= 2;

*/

#include <stdio.h>
int main(void)
{
    int n, m;

    for(n = 0; m > 0; m /= 2)
    ;

    return 0;
}

/**
 * In this code, the loop body is replaced with an empty statement ;. 
 * This means that the loop will iterate and divide m by 2 without performing any additional operations within the loop body.
 */