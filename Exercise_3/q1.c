/**
 * If i and j are positive integers, does (-i) /j always have the same value as - (i/j ) ? Jus¬
tify your answer.
*/


#include <stdio.h>
int main(void)
{
    int i = 2, j = 4;
    printf("%d\n", (-(i))/j);
    return 0;
}

/**
 * In the given code snippet, when i = 2 and j = 4, the expression (-i)/j is evaluated.

The expression (-i)/j first negates i to -2, and then performs integer division with j resulting in -2/4. In C, integer division truncates any decimal portion, so -2/4 evaluates to 0 since the result of the division is less than 0.5.

On the other hand, the expression -(i/j) is evaluated differently. In this case, i/j is evaluated first, which is 2/4, resulting in 0 because 2 divided by 4 is less than 0.5. Then, the unary negation - is applied to the result 0, which gives -0, which is effectively just 0.

Therefore, in this particular case, (-i)/j evaluates to 0, whereas -(i/j) also evaluates to 0. Hence, in this specific scenario, both expressions yield the same result.

However, it's important to note that this behavior may not hold for all possible values of i and j. In general, (-i)/j and -(i/j) can produce different results when the quotient i/j is not rounded towards zero.

To ensure consistent behavior, it's recommended to use parentheses to explicitly specify the desired evaluation order. For example, (-(i))/j would force negation before division, and -(i/j) would force division before negation.
*/