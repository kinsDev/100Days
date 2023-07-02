/**
Our next program prints a table showing the value of $100 invested at different
rates of interest over a period of years. The user will enter an interest rate and the
number of years the money will be invested. The table will show the value of the
money at one-year intervals—at that interest rate and the next four higher rates—
assuming that interest is compounded once a year. Here’s what a session with the
program will look like:

Enter interest rate: 6
Enter number of years: 5

Years     6%             7%             8%             9%             10%
1         106.00         107.00         108.00         109.00         110.00
2         112.36         114.49         116.64         118.81         121.00
3         119.10         122.50         125.97         129.50         133.10
4         126.25         131.08         136.05         141.16         146.41
5         133.82         140.26         146.93         153.86         161.05
*/
/**
 * value = 100
 * rates of interest + next four interest rates
 * years - 5 years
*/

#include <stdio.h>

#define NUM_RATES 5 //aray of five elements

int main(void)
{
    int rate, years, i, j;
    float initialValue;

    printf("Enter interest rate: ");
    scanf("%d", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    initialValue = 100.00f;

    /**Arranging years and rates*/
    printf("Years\t");
    for(i = 0; i < NUM_RATES; i++)//loop for creating the 4 next higher loops
    {
        printf("%d%%\t", rate + i); // 4 rates are added plus the intitial rate to become 5 total elements
    }
    printf("\n");

    for (i = 1; i <= years; i++)//outer loop
    {
        printf("%d\t", i); // years;

        for (j = 0; j < NUM_RATES; j++) // nested/ inner loop - iterates over different interest rates
        { 
            float rate_decimal = (rate + j) / 100.00f;//within the rate iteration it is incremented by 1
            float value = initialValue; //each & every rate is divided by 100 to find a decimal value for the rates

            //compound interest
            for (int k = 0; k < i; k++) //  calculates the compounded interest for the current year and interest rate.
            {
                value += value * rate_decimal;
            }
            
            printf("%.2f\t", value); // printing the calculated value
        }
        printf("\n");
    }

    return 0;
}
