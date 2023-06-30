/**
C. on the other hand, allows the basic types to be mixed in expressions.

compiler handles these conversions automatically, without the
programmer’s involvement, they’re known as implicit conversions.

C also allows the programmer to perform explicit conversions, using the cast operator.

Implicit conversions are performed in the following situations:
- When the operands in an arithmetic or logical expression don't have the same
type. (C performs what are known as the usual arithmetic conversions.)
- When the type of the expression on the right side ot an assignment doesn t
match the type of the variable on the left side.
- When the type of an argument in a function call doesn t match the type ot the
corresponding parameter.
- When the type of the expression in a return statement doesn't match the
function’s return type

the rules for performing the usual arithmetic conversions:

long double
double
float
- if one operand has type long double, then convert the other operand to type long double.
- if one operand has type double, convert the other operand to type double.
- if one operand has typefloat, convert the other operand to type float.

NB: Note that these rules covermixtures of integer and floating types:
if one operand has type long int, for example, and the other has type double,
the long int operand is converted to double.

unsigned long int
long int
unsigned int
int

There’s one special case, but it occurs only when long int and unsigned int
have the same length (32 bits, say). Under these circumstances, if one operand has
type long int and the other has type unsigned int. both are converted to
unsigned long int.


The following example shows the usual arithmetic conversions in action:

char c;
short int s;
int i;
unsigned int u;
long int 1;
unsigned long int ul;
float f;
double d;
long double Id;

i = i + c;       c is converted to int
i = i + s;       s is converted to int
u = u + i;       i is converted to unsigned int
1 = 1 + u;       u is converted to long int
ul = ul + 1;     1 is converted to unsigned long int
f = f + ul;      ul is converted to float
d = d + f;       f is converted to double
Id = Id + d;     d is converted to long double


Conversion During Assignment
The usual arithmetic conversions don’t apply to assignment. Instead. C follows the
simple rule that the expression on the right side of the assignment is converted to
the type of the variable on the left side. If the variable's type is at least as “wide" as
the expression's, this will work without a snag. For example:

char c;
int i ;
float f;
double d;

i = c;   c is converted to int  
f = i;   i is converted to float  
d = f;   f is converted to double  
*/