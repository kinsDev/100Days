/**
 * Here is a C program to print numbers from 1 to 10 in such a manner that when an odd no is encountered, we will print that number plus 1.
 */

//structure of indirect recursion is

/*
int recursion_01(int n)
{
    //code
    recurson_02();
    //code
}

int recursion_02()
{
    //code
    recursion_01();
    //code
}
*/

#include <stdio.h>
void odd();
void even();
int n = 1;

void odd()
{
    if(n <= 10)
    {
        printf("%2d", n+1); //base case
        n++;

        even();//recursion code
    }

    return;
}

void even()
{
    if(n <= 10)
    {
        printf("%2d", n-1);
        n++;

        odd();
    }

    return;
}

int main(void)
{

    odd();

    return 0;
}