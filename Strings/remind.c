/**
 * To illustrate the use of the C string library, we’ll now develop a program that prints
a one-month list of daily reminders. The user will enter a series of reminders, with
each prefixed by a day of the month. When the user enters 0 instead of a valid day.
the program will print a list of all reminders entered, sorted by day. Here’s what a
session with the program will look like:

Enter day and reminder: 24 Susan's birthday
Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
Enter day and reminder: 26 Movie - "Chinatown"
Enter day and reminder: 7 10:30 - Dental appointment
Enter day and reminder: 12 Movie - "Dazed and Confused"
Enter day and reminder: 5 Saturday class
Enter day and reminder: 12 Saturday class
Enter day and reminder: 0


Day Reminder
 5 Saturday class
 5 6:00 - Dinner with Marge and Russ
 7 10:30 - Dental appointment
12 Saturday class
12 Movie - "Dazed and Confused"
24 Susan's birthday
26 Movie - "Chinatown"
*/

#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60   /* max length of reminder message */

int read_line(char str[], int n);
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;
    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left -—\n ") ;
                break;
        }
        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);
        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    return 0;
}
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

// TIPS TO WRITE THE REMINDER PROGRAM
/**
 * we'll have the program read a series of day-and-reminder combinations
 * storing them in order (sorted by day), and then display them.
 * To read the days, we’ll use scanf
 * to read the reminders, we'll use our own input function (read_line) that doesn't:
 *  - skip white-space characters
 *  - stops reading at first line new character
 *  - discards extra characters
 * We’ll store the strings in a two-dimensional array of characters, with each row of the array containing one string
 * use strcmp function to search for a day and its associated reminder
 * use strcat function to append a day and its reminder
 * read the days as integer values suing scanf(its easierD)
 */