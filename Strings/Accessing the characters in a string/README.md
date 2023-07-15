# Accessing the Characters in a String
- Since strings are stored as arrays, we can use subscripting to access the characters in a string. To process every character in a siring s, for example, we can set up a loop that increments a counter i and selects characters via the expression s [i].
- Suppose that we need a function that counts the number of spaces in a string.
Using array subscripting, we might write the function in the following way:

```
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
```