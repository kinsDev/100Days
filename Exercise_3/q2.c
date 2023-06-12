/**
 * Show the output produced by each of the following program fragments. Assume that i. j.
and k are int variables.
(a) i = 7; j = 8;
i *= j + l;
printf("%d %d", i, j);
(b) i = j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);
(c) i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);
(d) i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);

*/

#include <stdio.h>
int main(void)
/*{
    int i = 7, j = 8;
    printf("The answer is %d\n", i *= j + 1);
    return 0;
}*/

/*{
    int i=1, j=1, k=1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);
    printf("The value is %d\n", i += j += k);
    return 0;
}*/

{
    int i = 1, j = 2, k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);
    printf("The result is %d\n", i -= j -= k);
    return 0;
}

/**
 * Explanation for this question:
 * Initialize the variables i with 1, j with 2, and k with 3.
Evaluate the expression j -= k. Since -= is a compound assignment operator, it is equivalent to j = j - k. Therefore, j is updated to j - k = 2 - 3 = -1.
Evaluate the expression i -= j. Similarly, i is updated to i - j = 1 - (-1) = 2.
The first printf statement prints the values of i, j, and k. Since i is 2, j is -1, and k is 3, the output will be 2 -1 3.
Evaluate the expression i -= j -= k. This expression is evaluated from right to left. First, j -= k is evaluated, which is equivalent to j = j - k. Since j is -1 and k is 3, j is updated to -1 - 3 = -4. Then, i -= j is evaluated, which is equivalent to i = i - j. Since i is 2 and j is -4, i is updated to 2 - (-4) = 6.
The second printf statement prints the value of i after the second compound assignment operation. Since i is 6, the output will be The result is 6.
*/

/*{
    int i = 2, j = 1, k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);
    return 0;
}*/