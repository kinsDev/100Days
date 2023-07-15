#include <stdio.h>

// n is the number of characters in array str
// i is used to loop through the conditions
// ch is used to represent character which is read as an integer value
// ch is used to represent getchar() function
/**
 * (ch = getchar()) != '\n' reads a character and checks if it is not equal to a newline character.
 * If i is less than n, the character ch is stored in the str array at the current index i, and i is incremented.
 * After the loop finishes, the null character ('\0') is appended to the end of the str array to mark the end of the string.
 * Finally, the function returns the value of i, which represents the number of characters read.
 */
int read_line(char str[], int n)
{
    int i = 0, ch;
    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main(void)
{
    /*...*/
    return 0;
}