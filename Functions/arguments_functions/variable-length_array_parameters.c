/**
 * VLAs - allows the length of an array to be specified using a non-constant expression
 *
 * Consider the sum_array function discussed earlier in this section. Here’s
the definition of sum array, with the body omitted:

int sum array(int a[], int n)
{
•••
}

As it stands now. there’s no direct link between n and the length of the array a.
Although the function body treats n as a’s length, the actual length of the array
could in fact be larger than n (or smaller, in which case the function won't work
correctly)

Using a variable-length array parameter, we can explicitly state that a’s length
is n:

int sum array(int n, int a[n] )
{
•••
}

The value of the first parameter (n) specifies the length of the second parameter
(a). Note that the order of the parameters has been switched: order is important
when variable-length array parameters are used.

There are several ways to write the prototype for our new version of
sumarray. One possibility is to make it look exactly like the function defini¬
tion:

int sumarray(int n, int a[n]);

Another possibility is to replace the array length by an asterisk(*) :

int sum_array(int n, int a[*]);

The reason for using the * notation is that parameter names are optional in func¬
tion declarations. If the name of the first parameter is omitted, it wouldn’t be possi¬
ble to specify that the length of the array is n. but the * provides a clue that the
length of the array is related to parameters that come earlier in the list:

int sum_array(int, int [*]);

It’s also legal to leave the brackets empty:
int sum_array(int n, int a[]);
int sum_array(int, int []);

*/