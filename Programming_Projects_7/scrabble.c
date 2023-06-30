/**
In the SCRABBLE Crossword game, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the 
letter’s rarity. (Here are the face values: 1:AEILNORSTU, 2:DG, 3:BCMP, 4:FHVWY, 5:K.
8:JX, 10:QZ.) Write a program that computes the value of a word by summing the values
of its letters:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function.
*/
#include <stdio.h>//for input/output operations
#include <ctype.h>//character handling functions like the toupper function
int main(void)
{
    char word;//to store the word entered by user
    int sum = 0;//to store sum which is the face value

    printf("Enter a word: ");

    while ((word = getchar()) != '\n') // A while loop is used to read each character entered by the user until a newline character ('\n') is encountered.

        switch (toupper(word))
        {
        case 'D':
        case 'G':
            sum += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            sum += 3;
            break;
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            sum += 4;
            break;
        case 'K':
            sum += 5;
            break;
        case 'J':
        case 'X':
            sum += 8;
            break;
        case 'Q':
        case 'Z':
            sum += 10;
            break;
        default:
            sum++;
            break;
        }

    printf("scrabble value: %d\n", sum);

    return 0;
}

/**
The necessary header files stdio.h and ctype.h are included for input/output operations and character handling functions, respectively.

The main() function is defined with a return type of int.

Two variables are declared:

word: to store the characters entered by the user.
sum: to store the sum of the face values of the letters.
The program prompts the user to enter a word using the printf() function.

A while loop is used to read each character entered by the user until a newline character ('\n') is encountered.

The getchar() function is used to read a character from the input stream and assign it to the word variable.

The toupper() function is used to convert the input character to uppercase before entering the switch-case statement. This ensures that the program can handle both lowercase and uppercase letters.

The program uses a switch-case statement to check the value of word (converted to uppercase) against different cases representing the different letters.

Each case represents a letter and increments the sum variable by the corresponding face value. For example, if the letter is 'D' or 'G', the sum is incremented by 2. Similarly, 'B', 'C', 'M', and 'P' increment the sum by 3, and so on.

The default case is executed when the input character is not a letter with a specific face value. In this case, it increments the sum by 1.

After the switch-case statement, the program continues reading the next character until a newline character is encountered.

Finally, the program prints the calculated sum as the Scrabble value of the entered word using the printf() function.
*/