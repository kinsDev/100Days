/**
 * When stocks are sold or purchased through a broker the broker’s commission is
often computed using a sliding scale that depends upon the value of the stocks
traded. Let’s say that a broker charges the amounts shown in the following table:
Transaction size Commission rate
Under $2,500 $30 + 1.7%
$2,500-$6,250 $56 + 0.66%
$6,250-$20,000 $76 + 0.34%
$20,000-$50,000 $100 + 0.22%
$50.000-$500,000 $ 155 + 0.11 %
Over $500,000 $255 + 0.09%
The minimum charge is $39. Our next program asks the user to enter the amount of
the trade, then displays the amount of the commission:
Enter value of trade: 30000
Commission: $166.00
The heart of the program is a cascaded if statement that determines which range
the trade falls into
*/
#include <stdio.h>
int main(void)
{
    float amount, Commission;

    printf("Enter the value of trade: ");
    scanf("%f", &amount);

    if(amount < 2500.00f){
        Commission = 30.00f + 0.017f * amount;
    }else if(amount > 2500.00f && amount < 6250.00f){
        Commission = 56.00f + 0.0066f * amount;
    }else if (amount > 6250.00f && amount < 20000.00f){
        Commission = 76.00f + 0.0034f * amount;
    }else if (amount > 20000.00f && amount < 50000.00f){
        Commission = 100.00f + 0.0022f * amount;
    }else if (amount > 50000.00f && amount < 500000.00f){
        Commission = 155.00f + 0.0011f * amount;
    }else{
        Commission = 255.00f + 0.0009f * amount;
    }

    if (Commission < 39.00f){
        Commission = 39.00f;
    }

    printf("Commission: $%.2f\n", Commission);

    return 0;
}