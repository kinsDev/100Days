/**
Write a program that finds the largest in a series of numbers entered by the user. 
The program must prompt the user to enter numbers one by one. When the user enters 0 or a 
negative number, the program must display the largest nonnegative number entered:
Enter a number: 6
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0
The largest number entered was 100.62
Notice that the numbers aren’t necessarily integers.
*/

/**
user enters number - num
the first num is obviously the max, as we don't have anything to compare it with
so we assign the num to max. max = num. 
while num is not equal or is greater than 0
program ask user to enter another number - loop
but before we loop, the current number is tested whether its greater than max and the assigned to max
and then if loop is true, another number is keyed in
when user enters num less than or equal to 0, program ends
program is supposed to find maximum number - max, from the nums entered.
This means that max > num
*/
#include <stdio.h>
int main(void)
{
    float num, max;

    printf("Enter a number: ");
    scanf("%f", &num);

    max = num;//the first num is obviously the max number, coz there's no other number to compare it with

    while(num > 0){
        
        if(num > max){ //if the new num is greater than max, we want to assign that num to max
            max = num;
        }

        printf("Enter a number: ");
        scanf("%f", &num); // if num entered is greater than 0, we want the program to ask the user to enter another number so that we can test it
    }
    printf("The largest number entered was %.2f\n", max);

    return 0;
}






























/*#include <stdio.h>
int main(void)
{
    float n, largest;

    for( ; ;){
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n == 0 && n < 0){
            printf("The largest number entered waa %f", n);
        }
    }

    return 0;
}*/