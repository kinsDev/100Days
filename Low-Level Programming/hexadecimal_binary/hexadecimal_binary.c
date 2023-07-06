/**
 * This program is used to convert a hexadecimal number to binary, so that I can solve some ALX questions
*/
#include <stdio.h>

void hexToBinary(char hex)
{
    switch(hex) // funtcion to represent digits into hexadecimals
    {
        case '0':
        printf("0000");
        break;

        case '1':
        printf("0001");
        break;

        case '2':
        printf("0010");
        break;

        case '3':
        printf("0011");
        break;

        case '4':
        printf("0100");
        break;

        case '5':
        printf("0101");
        break;

        case '6':
        printf("0110");
        break;

        case '7':
        printf("0111");
        break;

        case '8':
        printf("1000");
        break;

        case '9':
        printf("1001");
        break;

        case 'A':
        case 'a':
        printf("1010");
        break;

        case 'B':
        case 'b':
        printf("1011");
        break;

        case 'C':
        case 'c':
        printf("1100");
        break;

        case 'D':
        case 'd':
        printf("1101");
        break;

        case 'E':
        case 'e':
        printf("1110");
        break;

        case 'F':
        case 'f':
        printf("1111");
        break;

        default:
        printf("Invalid hexadecimal digit");
        break;
    }
}

int main(void)
{
    char hex[10];

    printf("Enter a hexadecimal number: ");
    scanf("%s", &hex);

    printf("Binary representation: ");
    for(int i = 0; hex[i] != '\0'; i++) // hex[i] is not equal to null. null character indicates end of a string
    {
        hexToBinary(hex[i]);//calling the hex to binary function and giving it the iterations of hex elements
    }
    printf("\n");

    return 0;
}