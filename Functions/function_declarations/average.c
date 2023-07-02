/*Function declaration is the first line of a function and ends in semi colon.
Provides the compiler with a brief glimpse of a function whose full deinition will appear later
Here's how our program would look with a declaration of average added:*/

#include <stdio.h>

double average(double a, double b); // function declaration

int main(void)
{
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));

    return 0;
}
/*function definition*/
double average(double a, double b)
{
    return(a + b) / 2;
}
