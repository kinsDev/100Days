//Static variables store information of the variable permanently
/*
A variable with a static storage duration retains its value throughout the
execution of the program.
*/

//An example
/*
void f(void)
{
    static int i;   static local variable
    ...
}
*/

//In a nutshell a static variable is a place to hide information from a function
//but retains that information for a future function call