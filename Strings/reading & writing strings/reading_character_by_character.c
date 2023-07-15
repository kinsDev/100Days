#include <stdio.h>

// n is the number of characters in array str
// i is used to loop through the conditions
// ch is used to represent character which is read as an integer value
// ch is used to represent getchar() function
/**
 * while ch is not equal to new line, do this:
 * while i is less than elements in str array increment those elements
 * and assign them to character ch
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