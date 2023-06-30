/**
Determining the Length of a Message

To illustrate how characters are read, let’s write a program that calculates the
length of a message. After the user enters the message, the program displays the
length:

Enter a message: Brevity is the soul of wit.
Your message was 27 character(s) long.

The length includes spaces and punctuation, but not the new-line character at the
end of the message.
We’ll need a loop whose body reads a character and increments a counter. The
loop will terminate as soon as a new-line character turns up. We could use either
scanf or getchar to read characters; most C programmers would choose
getchar.

*/

/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int i = 0;

    printf("Enter a message: ");
    ch = getchar();

    while(ch != '\n'){
        i++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.", i);

    return 0;
}*/

/* LETS SHORTEN OUR PROGRAM */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int i = 0;

    printf("Enter a message: ");
    ch = getchar();

    while (getchar() != '\n'){
        i++;
    }
    printf("Your message was %d character(s) long.", i);

    return 0;
}