/**
When reading or writing an unsigned integer, use the letter u, o, or x instead
of d in the conversion specification. If the u specifier is present, the number is
read (or written) in decimal notation; o indicates octal notation, and x indicates hexadecimal notation.

unsigned int u;

scanf("%u", &U);                          reads u in base 10
printf("%u", u);                          writes u in base 10
scanf("%o", &U);                          reads u in base 8
printf("%o", u);                          writes u in base 8
scanf("%x", &u);                          reads u in base 16
printf("%x", u);                          writes u in base 16

NB: %d conversion works only for the int type.


When reading or writing a short integer, put the letter h in front of d, o, u or x:
short s;

scanf("%hd", &s) ;
printf("%hd", s);


When reading or writing a long integer, put the letter l("ell") in
front of d, o, u, or x:
long l;
scanf("%ld", &l);
printf("%ld", &l) ;


When reading or writing a long long integer (C99 only), put the letters 11 in
front of d, o. u, or x:
long long 11;
scanf("%lld", &ll);
printf("%lld", &11);
*/