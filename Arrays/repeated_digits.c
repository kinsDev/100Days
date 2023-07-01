/**
Checking a Number for Repeated Digits

Our next program checks whether any of the digits in a number appear more than
once. After the user enters a number, the program prints either Repeated digit
or No repeated digit:
Enter a number: 28212
Repeated digit
*/

/**
- The program uses an array of Boolean values to keep track of which digits
appear in a number. 
- The array, named digit seen, is indexed from 0 to 9 to
correspond to the 10 possible digits. 
- Initially, every element of the array is false.
- (The initializer for digit_seen is {false}, which only initializes the first ele¬
ment of the array. However, the compiler will automatically make the remaining
elements zero, which is equivalent to false.)
- When given a number n, the program examines n’s digits one at a time, stor¬
ing each into the digit variable and then using it as an index into digit_seen.
- If digit_seen [digit] is true, then digit appears at least twice in n. On the
other hand, if digit_seen [digit] is false, then digit has not been seen
before, so the program sets digit_seen [digit] to true and keeps going.
*/
#include<stdbool.h>
#include <stdio.h>
int main(void)
{
    bool digit_seen[10] = {false};
    long n;//user enters long digit to accomodate any huge digit
    int digit;//the digits making up the number

    printf("Enter a number: ");//output
    scanf("%ld", &n);//reading user long digit

    while(n > 0){//when the keyed in number is greater than 0
        digit = n % 10; // the last digit of n is extracted by taking the modulo 10 (n % 10) and stored in the variable digit.
        if(digit_seen[digit] == true)
        {         // If digit_seen[digit] is true, it means the digit has been
            break; // encountered previously, and the loop is exited using the break statement.
        }
        digit_seen[digit] = true; // If the digit has not been seen before, the digit_seen[digit] is set to true to mark it as seen.
        n /= 10;                  // The value of n is updated by dividing it by 10 (n /= 10) to remove the last digit and prepare for the next iteration.
    }
    if (n > 0)
    {
        printf("Repeated digit\n");
    }
    else
    {
        printf("No repeated digit\n");
    }
    return 0;
}
