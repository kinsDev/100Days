Let’s say that we need a variable capable of storing a string of up to 80 characters. Since the string will need a null character at the end. we’ll declare the variable to be an array of 81 characters:

#define STR_LEN 80

char str[STR_LEN+1];

We defined STR_LEN to be 80 rather than 81. thus emphasizing the fact that str
can store strings of no more than 80 characters, and then added 1 to STR_LEN in
the declaration ofstr. This a common practice among C programmers.

Declaring a character array to have length STR_LEN + 1 doesn't mean that it
will always contain a string of STR_LEN characters. The length of a string
depends on the position of the terminating null character, not on the length of the array in which the string is stored. An array of STR_LEN + I characters can hold strings of various lengths, ranging from the empty string to strings of length STR_LEN.

# Initializing string variables
A string variable can be intitialized at the same time it's declared:
char date[8] = "June 14";
The compiler will pul the characters from "June 14" in the date array, then
add a null character so that date can be used as a string.

When an array initializer is shorter than the array itself, the remaining elements are initialized to zero. By initializing the leftover elements of a character array to \0. the compiler is following the same rule.

What if the initializer is longer than the string variable? That’s illegal for
strings, just as it’s illegal for other arrays. However, C does allow the initializer (not counting the null character) to have exactly the same length as the variable:
char date3[7] = "June 14";
There’s no room for the null character, so the compiler makes no attempt to store
one.

# character arrays vs character pointers
Lets compare the declaration
char date[] = "June 14";             declares date to be an array
char *date = "June 14";              declares date to be a pointer
Thanks to the close relationship between arrays and pointers, we can use either version of date as a string.
There are significant differences between the two:
1. In the array version, the characters stored in date can be modified, just like the elements in an array. In the pointer version, date points to a string literal, and strings literals shouldn't be modified.
2. In the array version, date is an array name. In the pointer version, date is a pointer that can point to other strings during program execution. 
   
char str[STRLEN+1], *p;
p = str;

p now points to the first character of array str that has a length of 80 + 1;