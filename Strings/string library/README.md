- Direct attempts to copy or compare strings will fail. For example, suppose that strl and str2 have been declared as follows:
```char strl [10], str2[10];```

- Copying a string into a character array using the = operator is not possible:
```
strl = "abc"; /*** WRONG ***/
str2 = strl; /*** WRONG ***/
```
- The C library provides a rich set of functions for performing operations on strings. 
- Prototypes for these functions reside in the <string.h> header, so programs that need string operations should contain the following line:
```
#include <string.h>
```
- Most of the functions declared in <string. h> require at least one string as
an argument. 
- String parameters are declared to have type char *, allowing the argument to be a character array, a variable of type char *. or a string literal—all
are suitable as strings.

## The strcpy (String Copy) Function
- The strcpy function has the following prototype in <string.h>
```
char *strcpy(char *s1, const char *s2);
```
- On the above segement, we say that; strcpy copies the string pointed to by s2 into the array pointed to by s1
```
strcpy(str2, "abcd");   //str2 now contains abcd

strcpy(str1, str2);    //str1 now contains abcd
``` 
### strncpy function
- Calling the strnepy function is a safer, a bit slower, way to copy a siring.
- strncpy is similar to strcpy but has a third argument that limits the number of characters that will be copied. 
- To copy str2 into strl, we could use the following call of strncpy:
```
strncpy(str1, str2, sizeof(str1));
```