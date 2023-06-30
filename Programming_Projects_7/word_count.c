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
            printf("Total length: %f\n", total_length);
        }else{ 
            word_count++;//the loop
            printf("Total number of words: %f\n", word_count);
        }
    }
    word_count++;
    average = total_length / word_count;
    printf("Average word length: %.1f\n", average);

    return 0;
}