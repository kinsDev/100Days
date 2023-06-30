/**
Modify the square2 . c program of Section 6.3 so that it pauses after every 24 squares and
displays the following message:
Press Enter to continue...
After displaying the message, the program should use getchar to read a character,
getchar won’t allow the program to continue until the user presses the Enter key.
*/
#include <stdio.h>

int main(void)
{
    int n, i;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &n);
    ch = getchar();//Read and discard new line character

    for (i = 1; i <= n; i++)
    {
        printf("%d\t%d\n", i, i * i);
        if(i % 24 == 0){
            printf("Press Enter to continue...\n");
            ch = getchar();//wait for the user to press enter
        }
    }

    return 0;
}
