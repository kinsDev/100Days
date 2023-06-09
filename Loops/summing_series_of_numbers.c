/**
 * As a second example of the while statement, let’s write a program that sums a
series of integers entered by the user. Here’s what the user will see:

This program sums a series of integers.
Enter integers (0 to terminate): 8 23 71 5 0
The sum is: 107
Clearly we’ll need a loop that uses scanf to read a number and then adds the
number to a running total.
Letting n represent the number just read and sum the total of all numbers pre¬
viously read, we end up with the following program:
*/
#include <stdio.h>

int main(void)
{
    int i, sum = 0;
    printf("This Program sums a series of numbers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &i);

    while (i != 0)
    {
        sum += i;
        scanf("%d", &i);
    }
    printf("The sum is: %d\n", sum);
    return 0;
}