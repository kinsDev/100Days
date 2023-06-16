/**
 * Calculating the Number of Digits in an Integer
Although the while statement appears in C programs much more often than the
do statement, the latter is handy for loops that must execute at least once. To illus¬
trate this point, let’s write a program that calculates the number of digits in an inte¬
ger entered by the user:
Enter a nonnegative integer: 60
The number has 2 digit(s).
Our strategy will be to divide the user’s input by 10 repeatedly until it
becomes 0; the number of divisions performed is the number of digits. Clearly
we'll need some kind of loop, since we don’t know how many divisions it will take
to reach 0. But should we use a while statement or a do statement? The do state¬
ment turns out to be more attractive, because every integer—even 0—has at least
one digit. Here's the program:

*/

#include <stdio.h>

int main(void)
{
    int digits = 0, n;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        digits++;
    } while (n != 0);

    printf("The number has %d digit(s).\n", digits);
    return 0;
}
