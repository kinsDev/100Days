/**
 * Although the while statement appears in C programs much more often than the
do statement, the latter is handy for loops that must execute at least once. 
To illustrate this point, let’s write a program that calculates the number of digits in an 
integer entered by the user:

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
    int n, i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    do
    {
       n /= 10;
       i++;
    } while (n > 0);

    printf("The number has %d digit(s).", i);

    return 0;
}

/**
 * so what happens here is that the user enters a number that is stored in n
 * that number is divided by 10 until it reaches 0
 * the number of divisions record the number of integers in that number
 * the initial digit count is 0
 * it is incremented once every division is done
 * the while n > 0 runs until its no longer greater than 0
 * that is because 0 has reached
 * hence we stop dividing and increamenting digits and thus we excute the printf statements
*/