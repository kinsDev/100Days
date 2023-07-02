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
            // we ensure that we start the calculation with the initial investment amount for each combination of year and interest rate.

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

/**
 * Certainly! Here's an explanation of the code structure in a simple manner:

1. The code starts by including the necessary header file `stdio.h` and defining a constant `NUM_RATES` with a value of 5.

2. The `main()` function is declared and initializes variables `rate`, `years`, `i`, and `j`. It also declares a variable `initialValue` to store the initial investment value.

3. The program prompts the user to enter the interest rate and the number of years using `printf()` and reads the input using `scanf()`.

4. The variable `initialValue` is set to `100.00f`, representing the initial investment amount.

5. The program prints the header row of the table using `printf()` to display the interest rates.

6. The `for` loop iterates `NUM_RATES` times, starting from 0 to `NUM_RATES - 1`. It prints the interest rates by adding the loop index `i` to the initial rate entered by the user.

7. After printing the interest rates, a newline character is printed using `printf()` to move to the next line.

8. The outer `for` loop iterates over the years. It starts from 1 and continues until the specified number of years.

9. Inside the outer loop, the program prints the current year using `printf()`.

10. The inner `for` loop iterates over the different interest rates. It starts from 0 and goes up to `NUM_RATES - 1`.

11. Within the inner loop, a variable `rate_decimal` is calculated by adding the loop index `j` to the initial interest rate and dividing the result by 100. This converts the interest rate to decimal form.

12. A variable `value` is initialized to `initialValue` to hold the calculated value for each combination of year and interest rate.

13. The program calculates the compounded interest by multiplying `value` with `rate_decimal` and adding the result to `value`. This is done `i` times, representing the number of years.

14. After calculating the compounded interest value, the program prints the value with two decimal places using `printf()`.

15. The inner loop continues until all interest rates are processed for the current year.

16. After completing the inner loop, a newline character is printed using `printf()` to move to the next line.

17. The outer loop continues until all years are processed.

18. Finally, the program returns 0 to indicate successful execution.

In summary, the code calculates the compounded interest for different combinations of interest rates and years, and prints the results in a table format. The nested loops iterate over the years and interest rates, perform the necessary calculations, and display the results accordingly.
*/
