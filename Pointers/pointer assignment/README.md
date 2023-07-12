C allows the use of assignment operators to copy pointers, 
provided that they are of the same type.

int i, j, *p, *q;

The statement

p = &i;                address of i is copied into p
q = p;                 copies contents of p(address of i) to q

both p and q now point to i, thus, change in p or q will affect i