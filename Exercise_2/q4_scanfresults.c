/**
 * Suppose that we call scanf as follows;
scanf("%d%f%d», &i, &x, &j) ;
If the user enters
10.3 5 6
what will be the values of i. x. and j after the call? (Assume that i and j are int variables
and x is a float variable.)

*/

#include<stdio.h>
int main(void){
    float i, j;
    int x;

    printf("Enter values: ");
    scanf("%f%d%d", &i, &x, &j);

    printf("i = %f, x = %d, j = %f\n", i, x, j);
}
