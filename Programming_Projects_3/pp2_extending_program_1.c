/**
 * Extend the program in Programming Project I to handle three-digit numbers
 */
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a three - digit number: ");
    scanf("%3d", &n);

    int i = n / 100;/*first part*/
    int j = (n / 10) % 10;/*middle part*/
    int k = n % 10;/*last part*/

    /*goal here is to interchange the last and first part and retain the middle part*/
    printf("The reversal is: %d%d%d", k, j, i);
    return 0;
}