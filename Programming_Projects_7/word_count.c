/**
Write a program that calculates the average word length for a sentence:

Enter a sentence: It was deja vu all over again.
Average word length: 3.4

For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.
*/

#include <stdio.h>
int main(void)
{
    float average, total_length = 0;
    int word_count = 0; // to keep track of the number of words in the sentence.
    char ch;

    printf("Enter a sentence: ");
    
    while((ch = getchar()) != '\n'){
        if(ch != ' '){//
            total_length++;    
        }else if(ch == ' '){ 
            word_count++;//the loop    
        }
    }
    word_count++;
    average = total_length / word_count;
    printf("Total length: %f\n", total_length);
    printf("Total number of words: %f\n", word_count);
    printf("Average word length: %.1f\n", average);

    return 0;
}

/**
Two variables are declared:

total_length: to store the sum of the lengths of all the words.
word_count: to keep track of the number of words in the sentence.
The program prompts the user to enter a sentence.

A while loop is used to read each character entered by the user until a newline character ('\n') is encountered.

Within the loop, an if statement is used to check if the character is not a space. If it's not a space, it means it's part of a word, so the total_length is incremented.

If the character is a space, it means the current word has ended, so the word_count is incremented.

After the loop, the word_count is incremented by 1 to account for the last word, which may not be followed by a space.

The average word length is calculated by dividing the total_length by the word_count and stored in the average variable.

Finally, the program prints the average word length to one decimal place using the printf() function.

This modified code considers punctuation marks to be part of the words they are attached to, as stated in the problem statement.
*/