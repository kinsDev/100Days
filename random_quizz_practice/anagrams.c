/**
 * Write a program that tests whether two words are anagrams (permutations of the same letters):
 * 
Enter first word: smartest
Enter second word: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.

Write a loop that reads the first word, character by character, using an array of 26 integers to
keep track of how many times each letter has been seen. (For example, after the word 
smartest has been read, the array should contain the values 1 000 I 000 0 00 0 1 0000 1 220
0 0 0 0 0. reflecting the fact that smartest contains one a, one e, one m, one r, two s’s and
two f's.) Use another loop to read the second word, except this time decrementing the 
corresponding array element as each letter is read. Both loops should ignore any characters that
aren't letters, and both should treat upper-case letters in the same way as lower-case letters.
After the second word has been read, use a third loop to check whether all the elements in
the array are zero. If so. the words are anagrams. Hint: You may wish to use functions from
<ctype .h>, such as isalpha and tolower.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int letterCount[26] = {0};
    char ch;
    int i;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            letterCount[ch - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            letterCount[ch - 'a']--;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (letterCount[i] != 0)
        {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
    return 0;
}
