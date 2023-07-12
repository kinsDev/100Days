                    #POINTER VARIBALE

The first step in understanding pointers is visualizing what they represent at the machine level.

In most modern computers, main memory is divided into bytes.
with each byte capable ofstoring eight bits of information. 

Each byte has a unique address to distinguish it from the other bytes in memory.
If there are n bytes in memory, we can think of addresses as numbers that range from 0 to n - 1.

Although addresses are represented by numbers, their range of values may differ from that of integers, so we can’t necessarily store them in ordinary integer variables. We can, however, store them in special pointer variables. 
When we store the address of a variable i in the pointer variable p. 
we say that p “points to" i.
In other words, a pointer is nothing more than an
address, and a pointer variable is just a variable that can store an address.


                    #DECLARING A POINTER VARIABLE
A pointer variable is declared in much the same way as an ordinary variable. The
only difference is that the name of a pointer variable must be preceded by an asterisk:
int *p;

Pointer variables can appear in declarations along with other variables:
int i, j, a [10], b[20], *p, *q;

C requires that every pointer variable point only to objects of a particular type
int *p;    /* points only to integers */
double *q; /* points only to doubles */
char *r;   /* points only to characters */

a pointer variable can even point to another pointer.