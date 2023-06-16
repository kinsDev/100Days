/*Printing a Table of Squares
    Let’s write a program that prints a table of squares.The program will first prompt
        the user to enter a number n.It will then print n lines of output,
    with each line con¬
        taining a number between I and n together with its square : This program prints a table of squares.Enter number of entries in table : 5 1 1 2 4 3 9 4 16 5 25 Let’s have the program store the desired number of squares in a variable
                                                                        named n.We’ll need a loop that repeatedly prints a number i and its square,
    start¬
            ing with i equal to 1. The loop will repeat as long as i is less than or
        equal to n.We’ll have to make sure to add I to i each time through the loop.We’ll write the loop as a while statement.(Frankly, we haven't got much choice, since the while statement is the only kind of loop we’ve covered so far.)
            Here’s the finished program :*/
/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;
}
