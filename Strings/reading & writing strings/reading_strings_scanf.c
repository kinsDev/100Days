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