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
    int word_count = 0;//loop through every character till end of line
    char ch;

    printf("Enter a sentence: ");
    
    while((ch = getchar()) != '\n'){
        if(ch != ' '){//
            total_length++;
        }else{ 
            word_count++;//the loop 
        }
    }
    word_count++;
    average = total_length / word_count;
    printf("Average word length: %.1f", average);

    return 0;
}