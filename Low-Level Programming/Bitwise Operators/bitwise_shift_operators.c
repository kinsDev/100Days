/**
 * C provides two shift operators: right and left shifts. >> & <<
 *
 * The following examples illustrate the effect of applying the shift operators to
the number 13.

unsigned short i, j;
i = 13;          i is now 13 (binary 0000000000001101)
j = i << 2;      j is now 52 (binary 0000000000110100)
j = i » 2;       j is now 3 (binary 0000000000000011)


To modify a variable by shifting its bits, we'd use the compound assignment operators <<= and >>=
i = 13;     i is now 13 (binary 0000000000001101)
i <<= 2;    i is now 52 (binary 0000000000110100)
i >>= 2;    i is now 13 (binary 0000000000001101)
*/

/**
 *
    ~       bitwise complement - The ~ operator produces the complement of its operand, with zeros
replaced by ones and ones replaced by zeros.

    &       bitwise and - performs a Boolean and operation on all corresponding bits in its two operands.

    ^       bitwise exclusive or - produces 0 whenever both operands have a 1 bit

    |       bitwise inclusive or - produces 1 whenever both operands have a 1 bit


The following examples illustrate the effect of the &, A, and | operators:
unsigned short i, j, k;
i = 21;            i is now 21 (binary 0000000000010101) 
j = 56;            j is now 56 (binary 0000000000111000) 
k = ~i;            k is now 65514 (binary 1111111111101010) 
k = i & j;         k is now 16 (binary 0000000000010000) 
k = i ^ j          k is now 45 (binary 0000000000101101) 
k = i | j;         k is now 61 (binary 0000000000111101) 
*/