/**
To access a particular element of an array, we write the array name followed by an
integer value in square brackets (this is referred to as subscripting or indexing the
array).

Array elements are always numbered starting from 0, so the elements of an
array of length n are indexed from 0 to n - 1.

Arrays and for loops go hand-in-hand. Many programs contain for loops
whose job is to perform some operation on every element in an array. Here are a
few examples of typical operations on an array a of length N:

for(i = 0; i < N; i++)
a[i] = 0;                   clears a

for(i = 0; i < N; i++)
scanf("%d", &a[i]);         reads data into a

for(i = 0; i < n; i++)
sum += a[i];                sums the element of the array


i = 0;
while (i < N)
a[i++] = 0;
Let’s trace this code. After i is set to 0, the while statement checks whether i is
less than N. If it is, 0 is assigned to a [0], i is incremented, and the loop repeats.
Note that a [++i] wouldn't be right, because 0 would be assigned to a [1] during
the first loop iteration.
*/