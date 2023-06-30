/**
The rules for implicit conversions in C99 are somewhat different from the rules in
C89. primarily because C99 has additional types ( Bool, long long types,
extended integer types, and complex types).

For the purpose of defining conversion rules, C99 gives each integer type an
“integer conversion rank." Here are the ranks from highest to lowest:

1. long long int, unsigned long long int
2. long int, unsigned long int
3. int, unsigned int
4. short int, unsigned short int
5. char, signed char, unsigned char
6. _Bool

C99 has "integer promotions,” which
involve converting any type whose rank is less than int and unsigned int to int
(provided that all values of the type can be represented using int) or else to unsigned int.


As in C89, the C99 rules for performing the usual arithmetic conversions can
be divided into two cases:
1. The type of either operand is a floating type. As long as neither operand has a
complex type, the rules are the same as before.

2. Neither operand type is a floating type. First perform integer promotion on
both operands. If the types of the two operands are now the same, the process
ends. Otherwise, use the following rules, stopping at the first one that applies:
• 1f both operands have signed types or both have unsigned types, convert the
operand whose type has lesser integer conversion rank to the type of the
operand with greater rank.
• If the unsigned operand has rank greater or equal to the rank of the type of
the signed operand, convert the signed operand to the type of the unsigned
operand.
• If the type of the signed operand can represent all of the values of the type
of the unsigned operand, convert the unsigned operand to the type of the
signed operand.
• Otherwise, convert both operands to the unsigned type corresponding to the
type of the signed operand.
*/

/* CASTING */
/**
Although C’s implicit conversions are convenient, we sometimes need a greater
degree of control over type conversion. For this reason, C provides casts.

A cast expression has the form:
( type-name ) expression

The following example shows how to use a cast expression to compute the fractional part of a float value:
float f, frac_part;
frac_part = f - (int) f;
The cast expression (int) f represents the result of converting the value of f to
type int. C’s usual arithmetic conversions then require that (int) f be
converted back to type float before the subtraction can be performed.
that is because frac_part is type float.



They also enable us to overrule the compiler and force it to do conversions that we
want. Consider the following example:
float quotient;
int dividend, divisor;
quotient = dividend / divisor;

As it’s now written, the result of the division—an integer—will be converted to
float form before being stored in quotient. We probably want dividend
and divisor converted to float before the division, though, so that we get a
more exact answer. A cast expression will do the trick:
- quotient = (float) dividend / divisor;
                 or
- quotient = (float) dividend / (float) divisor;
                 or
- quotient = dividend / (float) divisor;
NB: divisor doesn't need a cast, since casting dividend to float forces the
compiler to convert divisor to float also.
Incidentally, C regards ( type-name ) as a unary operator.


Casts are sometimes necessary to avoid overflow. Consider the following
example:
long i;
int j = 1000;
i = j * j;   overflow may occur 
At first glance, this statement looks fine.The value of j *j is 1,000, 000, and i is a long, 
so it can easily store values of this size, right? 
The problem is that when two int values are multiplied, the result will have int type.
But j * j is too large to represent as an int on some machines, causing an overflow.
Fortunately, using a cast avoids the problem: 
- i = (long)j * j;
*/