/**
A faster—and more portable—way to convert case is to call C’s toupper library function:
ch = toupper(ch);  converts ch to upper case

When it’s called, toupper checks whether its argument (ch in this case) is a
lower-case letter. If so, it returns the corresponding upper-case letter. Otherwise,
toupper returns the value of the argument.

Programs that call toupper need to have the following #include directive
at the top:
#include <ctype.h>
*/