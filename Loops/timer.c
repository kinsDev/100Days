/**Lets create a timer using while in C*/
#include <stdio.h>
int main(void)
{
    int n, i;

    printf("Enter time (minutes): ");
    scanf("%d", &n);

    i = n * 60;
    while(i > 0){
        printf("T minus %d\n", i--);
    }
    return 0;
}