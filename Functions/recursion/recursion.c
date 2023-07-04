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
 * - Base case: is an exit condition. Otherwise it goes into an infinite loop.
 * - Recursive case: The part of code inside the recursive function executed repeatedly while calling the recursive function.
 */


/**
 * BASIC SYNTAX OF RECURSION
void recursive_fun(void) recursive function
{
    Base_case;           stopping condition

    recursive_fun();      recursive call
}

int main(void)
{
    recursive_fun();       function call
}
*/

/**
 * In the code above, there is a recursive function and inside the recursive function
 * there is a recursive call which calls the recursive function until a certain condition is met.
 * If the condition get satisfied, the program control goes for the remaining statements and stops the program. 
*/

/*
void recursive_function(void)
{
    //base case - execution
    if base_case = true;
    return;

    else
    //recursive case - keeps repeating until the recursive call turns out to be true
    return code_for_recursion;
}
*/