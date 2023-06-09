/**
 * In the SCRABBLE Crossword Game, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the letter’s rarity. (Here are the face values: I: AEILNORSTU. 2: DG, 3: BCMP, 4: FHVWY, 5: K. 8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
of its letters:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the to upper library function.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int faceValues[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char word[100];
    int value = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    // Convert word to uppercase
    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = toupper(word[i]);
    }

    // Calculate the Scrabble value
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            value += faceValues[word[i] - 'A'];
        }
    }

    printf("Scrabble value: %d\n", value);

    return 0;
}