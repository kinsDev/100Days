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