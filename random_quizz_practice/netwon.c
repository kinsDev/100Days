/**
 * Write a program that uses Newton's method to compute the square root of a positive float¬
ing-point number:
Enter a positive number: 3
Square root: 1.73205
Let x be the number entered by the user. Newton’s method requires an initial guess y for the
square root of.v (we’ll use y = 1). Successive guesses are found by computing the average of
y and x/y. The following table shows how the square root of 3 would be found:
Average of
x y x/y y and x/y
3 1 3
3 2 1.5
3 1.75 1.71429
3 1.73214 1.73196
3 1.73205 1.73205
2
1.75
1.73214
1.73205
1.73205
Note that the values of y get progressively closer to the true square root of x. For greater
accuracy, your program should use variables of type double rather than float. Have the
program terminate when the absolute value of the difference between the old value ofy and
the new value ofy is less than the product of .00001 and y. Hint: Call the fabs function to
find the absolute value of a double. (You’ll need to include the <math.h> header at the
beginning of your program in order to use fabs.)
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, old_y, diff;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = 1.0;
    diff = 1.0; // Initialize the difference to a non-zero value

    while (diff > 0.00001 * y)
    {
        old_y = y;
        y = (y + x / y) / 2.0;
        diff = fabs(y - old_y);
    }

    printf("Square root: %lf\n", y);

    return 0;
}
