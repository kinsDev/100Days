/**
 * When the base case is not reached due to an incorrect definition or if the base case is not defined, 
 * it may lead to a stack overflow error as the stack space or memory will be filled with recursion calls.
 */

//Example

/*
int fibo(int n)
{
    //base case
    if(fibo == 1000)
    {
        return 0;
    }

    return fibo(n - 1) + fibo(n - 2);
}
*/

/*So in this, if we pass the function with a value less than 1000, 
-we will never reach any base condition so it will lead to a stack overflow error.*/