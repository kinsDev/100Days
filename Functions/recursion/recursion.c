/**
 * Recursion is a routine that calls itself again and again directly or indirectly.
 * There are two types of recursion in C - Direct calling and Indirect calling.
 *
 * The recursion is possible in C language by using method and function. The problems like the Tower of Hanoi, the Fibonacci series, and the
 * nth derivative can be solved using recursion.
 *
 * Recursion, in general, can be defined as the repetition of a process in a similar way until the specific condition reaches.
 *  Problems like sorting, traversal, and searching can be solved using recursion.
 *
 * While using recursion, make sure that it has a base (exit) condition; otherwise, the program will go into the infinite loop.
 *
 * The recursion contains two cases in its program body.
 * - Base case: is a specific condition in the function. When it is met, it terminates the recursion.
 * - Otherwise it goes into an infinite loop.
 * - Recursive case: The part of code inside the recursive function executed repeatedly while calling the recursive function.
 */


/**
 * BASIC SYNTAX OF RECURSION
void recusrive_fun(void)
{
    Base_case;           stopping condition

    recursive_fun();       recursive call/ repetition
}

int main(void)
{
    recursive_fun();       function call
}
*/