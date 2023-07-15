#include <stdio.h>

int line_reader(char str[], int n)
{
    int i = 0, ch;
    while((ch = getchar()) != '\n') //stops reading at first new line character
    {
        if(i < n)
        {
            str[i++] = ch;
        }
        str[i] = '\0';             //terminates string
        return i;                  //number of characters stored
    }
}

int main(void)
{
    /*...*/
    return 0;
}