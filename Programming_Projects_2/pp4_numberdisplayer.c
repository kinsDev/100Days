/**
 * Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [ (xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>
int main(void){
    int firstPart, secondPart, thirdPart;

    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &firstPart, &secondPart, &thirdPart);

    printf("You entered %d.%d.%d", firstPart, secondPart, thirdPart);
    return 0;
}

/*The trick in that code is that we have used different variables to represent different parts of the number*/