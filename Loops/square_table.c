/**
 * Let’s write a program that prints a table of squares. The program will first prompt
the user to enter a number n. It will then print n lines of output, with each line 
containing a number between 1 and n together with its square:
This program prints a table of squares.
Enter number of entries in table: 5
1      1
2      4
3      9
4      16
5      25
Let’s have the program store the desired number of squares in a variable
named n. We’ll need a loop that repeatedly prints a number i and its square, 
starting with i equal to 1. The loop will repeat as long as i is less than or equal to n.
We’ll have to make sure to add I to i each time through the loop.
We’ll write the loop as a while statement. (Frankly, we haven't got much
choice, since the while statement is the only kind of loop we’ve covered so far.)
Here’s the finished program:
*/

#include <stdio.h>
int main(void)
{
    int i, n;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n){
        printf("%d\t%d\n", i, i*i);
        i++; //prevent repetition
    }

    return 0;
}

/**
 * first of all we start with the value 1
 * the expression asks is 1 less than or equal than 5. Yes thats true, so compute the square of 1 also print the value of i
 * after that increment the value of i and test whether the expression is true
 * do that repeatedly until you reealize that the expression is false
*/

/**
 * WHY DID WE PREVENT REPETITION
 * Well this is because if we didn't use the i++, then  the code would be infinite because the initial value of i would always result into true
 * but when we increase the value of i, then it will reach a point where the value of i become greater than n hence ending the computation.
*/