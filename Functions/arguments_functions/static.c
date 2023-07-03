/**
 * Using static in Array Parameter Declarations
 *
 * In the following example, putting static in front of the number 3 indicates
that the length of a is guaranteed to be at least 3:

int sum_array(int a[static 3], int n)
{
    ...
}

Using static in this way has no effect on the behavior of the program. The pres¬
ence of static is merely a “hint” that may allow a C compiler to generate faster
instructions for accessing the array.

One last note about static: If an array parameter has more than one dimen¬
sion, static can be used only in the first dimension
*/