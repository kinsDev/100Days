#include <stdio.h>
int main(void)
{
    int i, j;
    i = 2;
    j = i * i++;
    printf("The value is %d\nKindly note that the value provided may be different on different compilers\n", j);
    return 0;
}