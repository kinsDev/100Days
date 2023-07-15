- Writing a string is easy using either the printf or puts functions.
- Reading a string is a bit harder, primarily because of the possibility that the input string may he longer than the string variable into which it’s being stored.
- To read a string in a single step, we can use either scanf or gets. 
- As an alternative, we can read strings one character at a time.

# Writing Strings Using printf and puts
#include <stdio.h>
int main(void)
{
    char str[] = "Are we having fun yet?";
    printf("%s\n", str);
    
    return 0;
}
printf writes the characters in a string one by one until it encounters a null character. (If the null character is missing, printf continues past the end of the string until—eventually—it finds a null character somewhere in memory.)
- To print just part of a string, we can use the conversion specification % .ps,
where p is the number of characters to be displayed. The statement:

printf ("%.6s\n" , str);

will print

Are we

- The C library also provides puts, which is used in the following way:
- puts(str);
- puts has only one argument (the string to be printed). After writing the string, puts always writes an additional new-line character, thus advancing to the beginning of the next output line.


# Reading Strings Using scanf and getS
- The %s conversion specification allows scanf to read a string into a character
array:
- scanf("%s", str);
- There's no need to put the & operator in front of str in the call of scanf: like any array name, str is treated as a pointer when passed to a function.