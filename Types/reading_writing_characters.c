/**
The %c conversion specification allows scanf and printf to read and write
single characters:

char ch;
scanf("%c", &ch);    reads a single character
printf("%c", ch);    writes a single character

scanf doesn’t skip white-space characters before reading a character. If the
next unread character is a space, then the variable ch in the previous example will
contain a space after scanf returns. To force scanf to skip white space before
reading a character, put a space in its format string just before %c:

scanf(" %c", &ch);  skips white space, then reads ch 
*/

/**
Since scanf doesn't normally skip white space, it’s easy to detect the end of
an input line: check to see if the character just read is the new-line character. For
example, the following loop will read and ignore all remaining characters in the
current input line:
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    do {
        scanf("%c", &ch);
    }while(ch != '\n');

    return 0;
}