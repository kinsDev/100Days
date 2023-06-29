/**
Write a program that prints a one-month calendar. The user specifies the number of days in
the month and the day of the week on which the month begins:

Enter number of days in month:
Enter starting day of the week (l=Sun, 7=Sat): 3

      1  2  3   4  5
6  7  8  9  10  11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31

Hint: This program isn’t as hard as it looks. The most important part is a for statement that
uses a variable i to count from I to n, where n is the number of days in the month, printing
each value of i. Inside the loop, an if statement tests whether i is the last day in a week; if
so. it prints a new-line character.
*/

#include <stdio.h>
int main(void)
{
    int n, i, startDay;

    printf("Enter number of days in  month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    /*We need to print the blank dates. Obviously they are less than the startDate*/
    for(i = 1; i <= startDay; i++){
        printf(" ");
    }

    /*after end of the week we need to go to the next line*/
    for(i = 1; i <= n; i++){
        if(i % 7 == 0){
            printf("\n");
        }
        printf("%3d", i);
    }

    return 0;
}