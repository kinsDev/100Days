/**
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one,
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10.
stopping when it reaches 0.
*/

#include <stdio.h>
int main(void)
{
    int number, remainder, reversed = 0;

    do
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;

    } while (number != 0);
    

    return 0;
}