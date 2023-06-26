/**The for statement is basically
 * for (expr1; expr2; expr3) statement
 * It can be used to write many loops
*/

/**
 * EXAMPLE
*/
#include <stdio.h>
int main(void)
{
    int i;

    for(i = 10; i > 0; i--){
        printf("T minus and counting: %d\n", i);
    }

    return 0;
}

/**
 * The for statement is usually the best choice for loops that “count up” (increment
a variable) or “count down” (decrement a variable). A for statement that counts
up or down a total of n times will usually have one of the following forms:
Counting upfrom 0 to n-1:
for (i = 0; i < n; i++)

Counting upfrom 1 to n;
for (i = 1; i <= n; i++) ...

Counting down from n-1 to 0:
for (i = n - 1; i >= 0; i--) ...

Counting downfrom n to 1:
for (i = n; i > 0; i--)

Imitating these patterns will help you avoid some of the following errors,
which beginning C programmers often make:
Using < instead of > (or vice versa) in the controlling expression. Notice that
“counting up" loops use the < or <= operator, while “counting down" loops
rely on > or >=.

Using == in the controlling expression instead of <, <=, >, or >=. A control¬
ling expression needs to be true at the beginning of the loop, then later become
false so that the loop can terminate. A test such as i == n doesn't make much
sense, because it won't be true initially.

“Off-by-one” errors such as writing the controlling expression as i <= n
instead of i < n.
*/