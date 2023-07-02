/**
 * Some functons have no arguments at all, let alone the return statement.
*/
#include <stdio.h>

void pun(void){
    printf("To C or not to C: that is the question\n");
}

int main(void)
{

    pun();//This is a call of function pun

    return 0;
}