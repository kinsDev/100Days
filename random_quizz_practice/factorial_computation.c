/**
 * Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
Factorial of 6: 720
(a) Use a short variable to store the value of the factorial. What is the largest value ofn
for which the program correctly prints the factorial of «?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using a long long variable instead (if your compiler supports the
long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a long double variable instead.
In cases (e)-(g). the program will display a close approximation of the factorial, not neces¬
sarily the exact value.
*/

#include <stdio.h>

int main(void)
{
    int n;
    short factorialShort = 1;
    int factorialInt = 1;
    long factorialLong = 1;
    long long factorialLongLong = 1;
    float factorialFloat = 1.0f;
    double factorialDouble = 1.0;
    long double factorialLongDouble = 1.0L;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorialShort *= i;
        factorialInt *= i;
        factorialLong *= i;
        factorialLongLong *= i;
        factorialFloat *= i;
        factorialDouble *= i;
        factorialLongDouble *= i;
    }

    printf("Factorial of %d (short): %hd\n", n, factorialShort);
    printf("Factorial of %d (int): %d\n", n, factorialInt);
    printf("Factorial of %d (long): %ld\n", n, factorialLong);
    printf("Factorial of %d (long long): %lld\n", n, factorialLongLong);
    printf("Factorial of %d (float): %f\n", n, factorialFloat);
    printf("Factorial of %d (double): %lf\n", n, factorialDouble);
    printf("Factorial of %d (long double): %Lf\n", n, factorialLongDouble);

    return 0;
}
