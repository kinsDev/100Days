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
strncpy(str1, str2, sizeof(str1)); //size of str1 1 species the size of characters to be copied
```

## The strlen (String Length) Function
- The strlen function has the following prototype:
```
size_t strlen(const char *s);

```
- strlen returns the length of a string s: the number of characters in s up to.
but not including, the first null character.
```
int len;

len = strlen ("abc")   /* len is now 3 */
len = strlen("");      /* len is now 0 */
strcpy(strl, "abc");
len = strlen(strl);    /* len is now 3 */
```

## The streat (String Concatenation) Function
- The streat function has the following prototype:
```
char *strcat(char *sl, const char *s2);

```
- streat appends the contents of the string s2 to the end of the string si; it
returns si (a pointer to the resulting string).
- Here are some examples ofstreat in action:
```
strcpy(strl, "abc");
strcat(strl, "def"); /* strl now contains "abcdef" */

```
```
strcpy(strl, "abc");
strcpy(str2, "def");
strcat(strl, strcat (str2, "ghi"));
/* strl now contains "abcdefghi"; str2 contains "defghi" */

```
- The strncat function is a safer but slower version of strcat. Like strncpy, it has a third argument that limits the number of characters it will copy.
- Here’s what a call might look like:
```
strncat(strl, str2, sizeof(strl) - strlen(strl) - 1);

```
## The strcmp (String Comparison) Function
- The strcmp function has the following prototype:
```
int strcmp(const char *sl, const char *s2);

```
- strcmp compares the strings si and s2. returning a value less than, equal to, or greater than 0. depending on whether si is less than, equal to, or greater than s2. 
- For example, to see if strl is less than str2, we’d write:
```if (strcmp(strl, str2) < 0) /* is strl < str2? */```
- To test whether strl is less than or equal to str2. we’d write
```if (strcmp(strl, str2) <= 0) /* is strl <= str2? */```
