/**
Write a program that reverses the words in a sentence:

Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point 
(the "terminating character"), which is saved in a separate char variable.

Then use a second loop to search backward through the array for the beginning of the last word. 
Print the last word, then search backward for the next-to-lasl word. 
Repeat until the beginning of the array is reached. 

Finally, print the terminating character.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

void reverseSentence(char sentence[], char terminatingChar);

int main(void)
{
    char sentence[MAX_LENGTH];
    char terminatingChar;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Determine the terminating character
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!')
        {
            terminatingChar = sentence[i];
            break;
        }
    }

    // Reverse the sentence
    reverseSentence(sentence, terminatingChar);

    return 0;
}

void reverseSentence(char sentence[], char terminatingChar)
{
    char words[MAX_LENGTH][MAX_LENGTH];
    int wordCount = 0;
    int i, j;

    // Extract words from the sentence
    for (i = 0, j = 0; sentence[i] != '\0'; i++)
    {
        if (!isspace(sentence[i]))
        {
            words[wordCount][j++] = sentence[i];
        }
        else if (j > 0)
        {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
    }

    words[wordCount][j] = '\0';
    wordCount++;

    // Print the reversed sentence
    printf("Reversal of sentence: ");
    for (i = wordCount - 1; i >= 0; i--)
    {
        printf("%s ", words[i]);
    }

    printf("%c\n", terminatingChar);
}
