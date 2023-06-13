/**
 * Clever programmers sometimes exploit the fact that the relational and equality
operators return integer values. For example, the value of the expression (i >= j )
+ (i == j ) is either 0, 1, or 2, depending on whether i is less than, greater than,
or equal to j. respectively. Tricky coding like this generally isn’t a good idea, how¬
ever; it makes programs hard to understand.
*/
#include <stdio.h>
int main(void)
{
    int i = 2, j = 1;
    printf("The value is: %d\n", (i >= j) + (i == j));
    return 0;
}

/**
 * {
    int i = 1, j = 2;
    printf("The value is: %d\n", (i >= j) + (i == j));
    return 0;
}
*/