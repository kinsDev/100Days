#include <stdio.h>
int main(void){
    int i = 1, j = 2, k = ++i + j++;

    printf("Value of K is %d\n", k);
    return 0;
}

/**i++ - increments a value afterwards*/
/**++i - increments a value immediately*/
/**Same thing happens on the --i and i--*/