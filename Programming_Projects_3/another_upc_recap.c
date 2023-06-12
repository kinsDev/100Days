/**
 * Let's write a program that calculates the check digit for an arbitrary UPC.
We’ll ask the user to enter the first 11 digits of the UPC, then we'll display the cor¬
responding check digit. To avoid confusion, we'll ask the user to enter the number
in three parts: the single digit at the left, the first group of five digits, and the sec¬
ond group of five digits. Here’s what a session with the program will look like:
Enter the first (single) digit: 0
Enter first group of five digits: 13800
Enter second group of five digits: 15173
Check digit: 5
Instead of reading each digit group as a five-digit number, we'll read it as five
one-digit numbers. Reading the numbers as single digits is more convenient; also,
we won’t have to worry that one of the five-digit numbers is too large to store in an
int variable. (Some older compilers limit the maximum value of an int variable
to 32,767.) To read single digits, we’ll use scanf with the %ld conversion speci¬
fication, which matches a one-digit integer.
*/

#include <stdio.h>
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int first_sum, second_sum, check_digit, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter the second group of five digits:");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    printf("The first sum is: %d\n", first_sum);

    second_sum = i1 + i3 + i5 + j2 + j4;
    printf("The second sum is: %d\n", second_sum);

    total = (3 * first_sum) + second_sum;
    printf("The total is: %d\n", total);
    
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}