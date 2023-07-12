We can not only pass pointers to functions but also write functions that return
pointers.

The following function, when given pointers to two integers, returns a pointer
to whichever integer is larger:

int *max(int *a, int *b)
{
if (*a > *b)
return a;
else
return b;
}

When we call max, we’ll pass pointers to two int variables and store the result in a pointer variable:
int *p, i, j;
p = max(&i, &j );