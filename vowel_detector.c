/**
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char sentence[100];
    int vowelCount = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        char c = tolower(sentence[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowelCount++;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowelCount);

    return 0;
}
