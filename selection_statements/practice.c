/**
 * if (expression)
 * {
 * statement;
 * }
 */

#include <stdio.h>
int main(void)
{
    int n = -1;

    if (n < 0){
        printf("n is less than 0\n");
    } else if (n == 0) {
        printf("n is equal to o\n");
    } else{
        printf("n is greater than 0\n");
    }

    return 0;
}
