#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x; //assigining value of x of type long to the integer part pointer
    *frac_part = x - *int_part; //substracting X which ic intially a floating point with precision from the integer part to get the fraction
}

int main(void)
{
    //declaring and intitalizing
    double x = 3.14159;
    long int_part;
    double frac_part;

    //calling the function and pointing the pointers to the addresses
    decompose(x, &int_part, &frac_part);

    printf("Original Number: %.5f\n", x);
    printf("Integer Part: %ld\n", int_part);
    printf("Fractional Part: %.5f\n", frac_part);

    return 0;
}