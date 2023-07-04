/**
 * There are two types of recursion in the C language.

Direct Recursion
Indirect Recursion
*/

// Direct recursion
// Direct recursion in C occurs when a function calls itself directly from inside
/*
void function_01(void)
{
    //some code
    function_01();
    //some code
}
*/

// Indirect recursion
// Indirect recursion in C occurs when a function calls another function and if this function calls the first function again.

/*
void function_01(void)
{
    // some code
    function_02();
    // some code
}

void function_02(void)
{
    //some code
    function_01();
    //some code
}
*/

// An example of direct recursion
void directRecursion()
{
    directRecFun();
}

// An example of indirect recursion
void indirectRecursion1()
{
    indirectRecFun2();
}

void indirectRecursion2()
{
    indirectRecFun1();
}
