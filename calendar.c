/**
 * Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins:

Enter number of days in month:
Enter starting day of the week (l=Sun, 7=Sat): 3

1 2 3 4 5
6 7 8 9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31

Hint: This program isn’t as hard as it looks. The most important part is a forstatement that
uses a variable i to count from I to n, where n is the number of days in the month, printing
each value of i. Inside the loop, an if statement tests whether i is the last day in a week; if
so. it prints a new-line character.

*/

#include <stdio.h>

int main(void)
{
    int days_in_month, start_day, day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    printf("\n");

    // Print the calendar header
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces for the starting day
    for (int i = 1; i < start_day; i++)
    {
        printf("    ");
    }

    // Print the days of the month
    for (day = 1; day <= days_in_month; day++)
    {
        printf("%4d", day);

        // Check if the current day is Saturday
        if ((day + start_day - 1) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}