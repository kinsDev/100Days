/**
We can use this program to illustrate an important point about the for statement: 
C places no restrictions on the three expressions that control its behavior.
Although these expressions usually initialize, test, and update the same variable,
there’s no requirement that they be related in any way. Consider the following 
version of the same program:
*/
/*#include <stdio.h>
int main(void)
{
    int i, n;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in the table: ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++){
        printf("%d\t%d\n", i, i*i);
    }
    return 0;
}*/

#include <stdio.h>
int main(void)
{
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;

    for(square = 1; i <= n; odd += 2){
        printf("%d\t%d\n", i, square);
        i++;
        square += odd;
    }

    return 0;
}