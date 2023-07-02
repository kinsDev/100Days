/**
 * A function declaration resembles the first line of a function definition with a semicolon added at the end:
- return-type function-name ( parameters ) ;

In the programs in Section 9.1. the definition of each function was always placed
above the point at which it was called. In fact. C doesn't require that the definition
of a function precede its calls. Suppose that we rearrange the average.c pro¬
gram by putting the definition of average after the definition of main:
#include <stdio.h>
int main(void)
{
double x, y, z;
printf("Enter three numbers: ");
scanf("%lf%lf%lf", &x, &y, &z);
printf("Average of %g and %g: %g\n", x, y, average(x, y));
printf("Average of %g and %g: %g\n", y, z, averagely, z));
printf("Average of %g and %g: %g\n", x, z, average(x, z));
return 0;
}
double average(double a, double b)
{
return (a + b) / 2;
}

When the compiler encounters the first call of average in main, it has no
information about average: it doesn’t know how many parameters average
has, what the types of these parameters are, or what kind of value average
returns.

Instead of producing an error message, though, the compiler assumes that
average returns an int value

We say that the compiler has created an implicit dec¬
laration of the function. The compiler is unable to check that we’re passing
average the right number of arguments and that the arguments have the proper
type. Instead, it performs the default argument promotions and hopes for the best.
When it encounters the definition of average later in the program, the compiler
notices that the function’s return type is actually double, not int, and so we
get an error message.

One way to avoid the problem of call-before-definition is to declare each function before calling it.

A Junction declaration provides the compiler with a brief glimpse at a function
whose full definition will appear later.
*/