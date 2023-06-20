/**
 * Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>
int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time e.g(21:11): ");
    scanf("%d:%d", &hours, &minutes);

    if (hours > 0 && hours <= 9)
    {
        printf("Equivalent 12-hour time: %d:%.2d AM", hours, minutes);
    }else if (hours >= 10 && hours < 12)
    {
    printf("Equivalent 12-hour time: %d:%.2d AM", hours, minutes);
    }else if (hours > 12 && hours <= 23)
    {
        printf("Equivalent 12-hour time: %d:%.2d PM", hours - 12, minutes);
    }else if(hours == 0)
        {
            printf("Equivalent 12-hour time: 12:%.2d AM", minutes);
        }

    return 0;
}