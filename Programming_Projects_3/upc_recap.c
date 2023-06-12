/*Lets do a recap on the UPC checker*/
#include <stdio.h>
int main(void)
{
    int first = 0, second = 1, third = 3, fourth = 8, fifth = 0, sixth = 0, seventh = 1, eighth = 5, ninth = 1, tenth = 7, eleventh = 3;
    int digit_first_part, digit_second_part, multplied_first_sum, new_second_sum, total, remainder, subtracted;

    digit_first_part = first + third + fifth + seventh + ninth + eleventh;
    printf("The sum of first part: %d\n", digit_first_part);

    digit_second_part = second + fourth + sixth + eighth + tenth;
    printf("The sum of second part: %d\n", digit_second_part);

    multplied_first_sum = digit_first_part * 3;
    new_second_sum = multplied_first_sum + digit_second_part;
    printf("Multiplying first sum by 3 and adding it to second sum yields: %d\n", new_second_sum);

    total = new_second_sum - 1;
    printf("Subtracting 1 from total: %d\n", total);

    remainder = new_second_sum % 10;
    printf("The remainder: %d\n", remainder);

    subtracted = 9 - remainder;
    printf("When the remainder is subtracted from 9, the value is: %d\n", subtracted);
    return 0;
}