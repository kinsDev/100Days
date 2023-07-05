/**
 * C Program to show infinite recursive function
 */

#include <stdio.h>
int main(void)
{
    printf("Kinsley Kaimenyi\n");
    main();

    return 0;
}

/**
 * In this function main, there is a call for main() function
 * from inside main() function. Since there is no exit, the program will print 
 * Kinsley Kaimenyi an infinite number of times
*/