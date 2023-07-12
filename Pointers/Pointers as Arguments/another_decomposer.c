#include <stdio.h>

void decomposer(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}

int main(void)
{
    double x = 45.6789;
    long int_part;
    double frac_part;

    decomposer(x, &int_part, &frac_part);

    printf("Original number: %.4f\n", x);
    printf("Integer part: %ld\n", int_part);
    printf("Fractional part: %.4f\n", frac_part);
    return 0;
}