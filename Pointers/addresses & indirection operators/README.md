#The Address and Indirection Operators
C provides a pair of operators designed specifically for use with pointers. To find the address of a variable, we use the & (address) operator. 
If x is a variable, then
&x is the address of x in memory.

To gain access to the object that a pointer points
to, we use the * (indirection) operator. If p is a pointer, then *p represents the object to which p currently points.


#The Address Operator
A way to initialize the pointer variable is to assign it the address of some variable:

int i, *p;
...
p = &i;
- in this case pointer varibale p points to the address of variable i

It's also possible to initialize a pointer variable at the time we declare it:
int i;
int *p = &i;

or

int i, *p = &i

#The indirection operator
Once a pointer variable points to an object, we can use the * (indirection) operator to access what’s stored in the object. If p points to i, for example, we can print the value of i as follows:
printf("%d\n" , *p);
printf will display the value of i. not the address of i.

Applying & to a variable produces a pointer to the variable: applying * to the
pointer takes us back to the original variable:
j = *&i;  is the same as j = i;

As long as p points to i, *p is an alias for i. Not only does *p have the same
value as i. but changing the value of *p also changes the value of i.
p = &i;    this means that p should be assigned the address of i

i = 1;     if 1 is the address of i, then

printf("%d\n", i);    will print 1
printf("%d\n", *p);   will print 1
*p = 2;               changing the value of pointer p will also change the value of i

so the new value of i and *p will be 2.