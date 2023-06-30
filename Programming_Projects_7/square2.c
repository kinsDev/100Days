/**
The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
i * i exceeds the maximum int value. Run the program and determine the smallest value
of n that causes failure. Try changing the type of i to short and running the program
again. (Don’t forget to update the conversion specifications in the call of printf!) Then
try long. From these experiments, what can you conclude about the number of bits used to
store integer types on your machine?
*/

/*#include <stdio.h> printing short integers 

int main(void)
{
    int n; 
    short i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%hd\t%hd\n", i, i * i);
    }

    return 0;
}*/

#include <stdio.h>//printing long integers

int main(void)
{
    int n;
    long i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%ld\t%ld\n", i, i * i);
    }

    return 0;
}
