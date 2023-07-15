// we are counting ther number of spaces
// i is used to represent space character
// as long as i is not a null character, increment the space count
#include <stdio.h>

int count_spaces(const char s[])
{
    int count = 0, i;

    for(i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    return count; 
}