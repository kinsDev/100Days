/**
 * The continue statement makes it possible to
skip part of a loop iteration without jumping out of the loop.

continue transfers control to a point just before the end of the loop body
with continue, control remains inside the loop
continue is limited to loops.
*/

#include <stdio.h>
int main(void)
{
    int n, i, sum;

    printf("Enter numbers: ");
    scanf("%d", &i);

    n = 0;
    sum = 0;

    while (n < 10){
        scanf("%d", &i);
        if (i == 0){
            continue;
        }
        sum += i;
        n++;
    }
    printf("%d", sum);

    return 0;
}