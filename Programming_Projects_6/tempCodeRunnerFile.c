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
    printf("The largest number entered was %f\n", max);

    return 0;
}
