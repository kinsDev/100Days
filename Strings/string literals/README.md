A string literal is a sequence of characters enclosed within double quotes:
"When you come to a fork in the road, take it."

#Continuing a String Literal
when two or more string literals are adjacent (separated only by white space), the compiler will join them into a single string. This rule allows us to split a string literal over two or more lines:

printf("When you come to a fork in the road, take it. "
"--Yogi Berra");

#How string literals are stored
C treats string literals as characters.
Whe a C compiler encounters a string literal of length n its set aside n + 1 bytes of memory for the string.
The memory will comntain characters in the string plus the null character to mark the end of the string.

For example, the string literal "abc" is strored in an array of four characters
(a, b, c, and \0):
" abc" is stored as an array of four characters

string literals may be empty; " " is stored as a single null parameter \0