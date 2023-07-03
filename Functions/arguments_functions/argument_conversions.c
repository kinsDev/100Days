/**
 * C allows function calls in which the types of the arguments don’t match the types
of the parameters. The rules governing how the arguments are converted depend on
whether or not the compiler has seen the function's full definition prior to the call:

- The compiler has encountered a prototype prior to the call. The value of
each argument is implicitly converted to the type of the corresponding param¬
eter as if by assignment. For example, if an int argument is passed to a func¬
tion that was expecting a double, the argument is converted to double
automatically

- The compiler has not encountered a prototype prior to the call. The compiler
performs the default argument promotions: (1) float arguments are con¬
vened to double. (2) The integral promotions are performed, causing char
and short arguments to be converted to int.


Relying on the default argument promotions is dangerous. Consider the following
program:
#include <stdio.h>
int main(void) - deault, expects X to be an int
{
double x = 3.0; - but its double
printf("Square: %d\n", square(x));
return 0;
}
int square(int n)
{
return n * n;
}
At the time square is called, the compiler hasn’t seen a prototype yet, so it
doesn't know that square expects an argument of type int. Instead, the com¬
piler performs the default argument promotions on x. with no effect. Since it's
expecting an argument of type int but has been given a double value instead,
the effect of calling square is undefined. The problem can be fixed by casting
square’s argument to the proper type:

printf("Square: %d\n", square((int) x)); - cast to fix
*/