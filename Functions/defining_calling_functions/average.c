/**
Suppose we often need to compute the average of two double values. The C
library doesn't have an “average" function, but we can easily define our own.
Here’s what it would look like:
*/

/*double average(double a, double b)
{
    return (a + b) / 2;
}*/

/**
 * The word double is averages return type - how data will be rerurned every time the function average is called
 * a & b are the function input parameters. Parameters are supplied everytime the function is called
 * each parameter must have a type
 * The rest is the body. enclosed in braces; executing the body causes the the function to return to where it started
*/

/*WE NEED TO CALL A FUNCTION*/
/*
- To call a function, we write the function name, followed by a list of arguments.
- for example average(x, y);
- The effect of the call average (x, y) is to copy the values of x and y into the parameters a and b. 
and then execute the body of average.
*/

/**
Now, let's use the average function in a complete program. The following
program reads three numbers and computes their averages, one pair at a time:

Enter three numbers: 3.5 9.6 10.2

Average of 3.5 and 9.6: 6.55
Average of 9.6 and 10.2: 9.9
Average of 3.5 and 10.2: 6.85
*/

#include <stdio.h>

double average(double a, double b)
{
    return (a + b) / 2;
}

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