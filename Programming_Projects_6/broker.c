/**
Add a loop to the broker.c program of Section 5.2 so that the user can enter more than
one trade and the program will calculate the commission on each. The program should 
terminate when the user enters 0 as the trade value:
Enter value of trade: 30000
Commission: $166.00
Enter value of trade: 20000
Commission: $144.00
Enter value of trade: 0
*/

#include <stdio.h>
int main(void)
{
    float amount, Commission;

    printf("Enter the value of trade: ");
    scanf("%f", &amount);

    while(amount != 0){

        if (amount < 2500.00f)
        {
            Commission = 30.00f + 0.017f * amount;

        }
        else if (amount >= 2500.00f && amount < 6250.00f)
        {
            Commission = 56.00f + 0.0066f * amount;
        }
        else if (amount >= 6250.00f && amount < 20000.00f)
        {
            Commission = 76.00f + 0.0034f * amount;
        }
        else if (amount >= 20000.00f && amount < 50000.00f)
        {
            Commission = 100.00f + 0.0022f * amount;
        }
        else if (amount >= 50000.00f && amount < 500000.00f)
        {
            Commission = 155.00f + 0.0011f * amount;
        }
        else
        {
            Commission = 255.00f + 0.0009f * amount;
        }

        if (Commission < 39.00f)
        {
            Commission = 39.00f;
        }

        printf("Commission: $%.2f\n", Commission);

        printf("Enter the value of trade: ");
        scanf("%f", &amount);
    }

    return 0;
}

