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


# Reading Strings Using scanf and gets
- The %s conversion specification allows scanf to read a string into a character array:
- scanf("%s", str);
- There's no need to put the & operator in front of str in the call of scanf: like any array name, str is treated as a pointer when passed to a function.
- When scanf is called, it skips u'hite space, then reads characters and stores them in str until it encounters a white-space character, scanf always stores a
null character at the end of the string.

### Thats where gets comes in...
- Consequently, scanf won't usually read a full line of input; a new-line character will cause
scanf to stop reading, but so will a space or tab character. To read an entire line of input at a time, we can use gets.
- Like scanf the gets function reads input characters into an array, then stores a null character. 

#### Differences between gets and scanf
1. gets doesn't skip the white space before starting to read the string unlike scanf which does so.
2. gets reads until it finds a new-line character (scanf stops at any white space character). Incidentally, gets discards the new-line character instead of
storing it in the array; the null character takes its place.

- To see the difference between scanf and gets, consider the following program fragment:
```
#include <stdio.h>

#define SENT_LEN 100

int main(void)
{
    char sentence[SENT_LEN];

    printf("Enter a sentence: \n");
    scanf("%s", sentence);

    printf("%s", sentence);
    
    return 0;
}
```
- scanf will store the string "To" in sentence. The next call of scanf will
resume reading the line at the space after the word To.

####suppose we replace scanf by gets
```
#include <stdio.h>

#define SENT_LEN 100

int main(void)
{
    char sentence[SENT_LEN];

    printf("Enter a sentence: \n");
    gets(sentence);

    printf("%s", sentence);

    return 0;
}
```

#Reading Strings Character by Character
- Since both scanf and gets are risky and insufficiently flexible for many applications, C programmers often write their own input functions. By reading strings
one character at a time, these functions provide a greater degree of control than the standard input functions.
- If we decide to design our own input function, we’ll need to consider the following issues:
  - Should the function skip white space before beginning to store the string?
  - What character causes the function to stop reading: a new-line character, any
    white-space character, or some other character? Is this character stored in the
    string or discarded?
  - What should the function do if the input string is too long to store: discard the extra characters or leave them for the next input operation?
  
- Suppose we need a function that doesn't skip white-space characters, stops
reading at the first new-line character, & discards extra characters. The function might have the following prototypes:
```
int read_line(char str[], int n)
{
    int i = 0, ch;
    while((ch = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main(void)
{
    /*...*/
    return 0;
}
```