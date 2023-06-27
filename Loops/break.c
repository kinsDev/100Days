/**
 * we’ll need a loop with an exit point in the middle. We may even want a loop
to have more than one exit point. The break statement makes it possible to write
either kind of loop.

The break statement can also be used to jump out of a
while, do, or for loop.
*/

#include<stdio.h>
int main(void)
{
    int d, n;

    printf("Enter a number to check whether its a prime number: ");
    scanf("%d", &n);

    for(d = 2; d < n; d++){
        if (n % d == 0){
            break;
        }
        if (d < n){
            printf("%d is divisible by %d\n", n, d);
        }
        else{
            printf("%d is prime\n", n);
        }
    }

    return 0;
}