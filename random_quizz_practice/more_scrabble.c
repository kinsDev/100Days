/**
 * In the SCRABBLE Crossword Came, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the 
letter’s rarity. (Here are the face values: 1: AEILNORSTU. 2: DG, 3: BCMP, 4: FHVWY, 5: K.
8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
of its letters:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function.
*/

#include <stdio.h>
#include <ctype.h>
int calculateScrabbleValue(char letter)
{
    int value = 0;
    if (strchr("AEILNORSTU", letter) != NULL)
        value = 1;
    else if (strchr("DG", letter) != NULL)
        value = 2;
    else if (strchr("BCMP", letter) != NULL)
        value = 3;
    else if (strchr("FHVWY", letter) != NULL)
        value = 4;
    else if (letter == 'K')
        value = 5;
    else if (strchr("JX", letter) != NULL)
        value = 8;
    else if (strchr("QZ", letter) != NULL)
        value = 10;

    return value;
}
int main(void)
{
    char word[100];
    int scrabbleValue = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        char letter = toupper(word[i]);
        scrabbleValue += calculateScrabbleValue(letter);
    }
    printf("Scrabble value: %d\n", scrabbleValue);
    return 0;
}
