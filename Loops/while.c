/**
 * while (the expression is true) {execute this statement};
 * The statement is not executed when the expression is false.
*/

#include <stdio.h>
int main(void)
{
    int n, i;
    n = 10;
    i = 1;
    while (i < n){
        printf("%d\n", i = i * 2);
    }   
}