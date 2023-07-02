/**
 * 
*/
#include <stdio.h>

void countdown(int n) // every parameter type must be specified - no retun statement since its void
{
    printf("T minus %d and counting\n", n);
}

int main(void)
{
    int n;

    for(n = 10; n > 0; n--){
        countdown(n);
    }
}

/**
 * void is used because there will be no return statement in this loop
 * hence we call the function in the code; countdown(n);
 * we initialize n with 10 its tested and then returned to the function using the call statement
 * n is reduced again and re-tested, and tge process continues over and over again. 
*/