/**In this Program, we will be converting fahrenheit to Celsius*/

/**
 * The following program prompts the user to enter a Fahrenheit temperature; it then
prints the equivalent Celsius temperature. The output of the program will have the
following appearance (as usual, input entered by the user is underlined):

Enter Fahrenheit temperature: 212
Celsius equivalent: 100.0

The program will allow temperatures that aren't integers; that’s why the Celsius
temperature is displayed as 100.0 instead of 100. Let’s look first at the entire
program, then see how it’s put together.
*/

/**We will be using #define to name our constants instead of using variables*/

/**The formula is:
 * (Fahrenheit - freezing point which is equal to 32) * (scale factor which is equal to 5/9)
*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f", celsius);

    return 0;
}

/**
 * The statement
Celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
converts the Fahrenheit temperature to Celsius. Since FREEZING_PT stands for
32 . Of and SCALE_FACTOR stands for (5 . Of / 9 . Of ), the compiler sees this
statement as
Celsius = (fahrenheit - 32.Of) * (5.Of / 9.Of);
Defining SCALE_FACTOR to be (5.Of / 9.Of) instead of (5/9) is impor¬
tant, because C truncates the result when two integers are divided. The value of
(5 / 9) would be 0, which definitely isn’t what we want.
The call ofprintf writes the Celsius temperature:
printf("Celsius equivalent: %.lf\n", Celsius);
Notice the use of % . If to display celsius with just one digit after the decimal
point.
*/