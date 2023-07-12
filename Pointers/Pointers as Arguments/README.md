A variable supplied as an argument in a function
call is protected against change, because C passes arguments by value. 
This property of C can be a nuisance if we want the function to be able to modify the variable.

Using pointers as arguments to functions is actually nothing new; we’ve been
doing it in calls of scanf since Chapter 2. Consider the following example:

int i;
•••
scanf("%d", &i);
We must put the & operator in front of i so that scanf is given a pointer to i: that
pointer tells scanf where to put the value that it reads. Without the &. scanf
would be supplied with the value of i.

Although scanf’s arguments must be pointers, it’s not always true that every
argument needs the & operator. In the following example, scanf is passed a
pointer variable:

int i, *p;
...
p = &i;
scanf("%d", p);
Since p contains the address of i, scanf will read an integer and store it in i.