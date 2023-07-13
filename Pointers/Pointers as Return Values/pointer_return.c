#include <stdio.h>

#define NUM 2

int *max(int *a, int *b)
{
    if(*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int i, j;
    int *p;

    printf("Enter %d integers: ", NUM);
    scanf("%d%d", &i, &j);

    p = max(&i, &j);

    printf("%d is greater than %d\n", *p, *p == i ? j : i);

    /*if(i > j)
    {
        printf("%d is greater than %d\n", i, j);
    }

    else
    {
        printf("%d is greater than %d\n", j, i);
    }*/

    return 0;
}