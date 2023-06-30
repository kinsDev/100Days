/**
Reading and Writing Characters using getchar and putchar

C provides other ways to read and write single characters. In particular, we can use
the getchar and putchar functions instead of calling scanf and printf.

putchar writes a single character:
putchar(ch) ; - in this case putchar is like printf

Each time getchar is called, it reads one character, which it returns. In order to
save this character, we must use assignment to store it in a variable:
ch = getchar();  reads a character and stores it in ch
getchar is like scanf in this case

NB: getchar actually returns an int value rather than a char value
*/

/**
Be careful if you mix getchar and scanf in the same program, scanf has a
tendency to leave behind characters that it has “peeked" at but not read, including
the new-line character. Consider what happens if we try to read a number first, then
a character:
*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int i;
    char command;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a command: ");
    command = getchar();

    return 0;
}

/**
The call of scanf will leave behind any characters that weren’t consumed during
the reading of i, including (but not limited to) the new-line character, getchar
will fetch the first leftover character, which wasn't what we had in mind.
*/