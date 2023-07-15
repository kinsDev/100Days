A string literal is a sequence of characters enclosed within double quotes:
"When you come to a fork in the road, take it."

# Continuing a String Literal
when two or more string literals are adjacent (separated only by white space), the compiler will join them into a single string. This rule allows us to split a string literal over two or more lines:

printf("When you come to a fork in the road, take it. "
"--Yogi Berra");

# How string literals are stored
C treats string literals as characters.
When a C compiler encounters a string literal of length n its set aside n + 1 bytes of memory for the string.
The memory will comntain characters in the string plus the null character to mark the end of the string.

For example, the string literal "abc" is strored in an array of four characters
(a, b, c, and \0):
" abc" is stored as an array of four characters

string literals may be empty; the string " " is stored as a single null parameter \0


# Operations on String Literals
char *p;
p = "abc";

This operation basically makes P point to the first character of the string.

C allows pointers to be subscripted, so we can subscript string literals:
char ch;
ch = "abc"[1] ;
 the new value of character ch will be 'b'

# string literals vs Character constants
A string literal containing a character constant isn't the same as a character constant.
A string literal 'a' is represented by a pointer to a memory location that contains the character 'a' followed by a null character '\0'.
The character constant 'a' is represented by an integer value. 