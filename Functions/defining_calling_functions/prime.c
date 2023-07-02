/**
 * To see how functions can make programs easier to understand, let’s write a pro¬
gram that tests whether a number is prime. The program will prompt the user to
enter a number, then respond with a message indicating whether or not the number
is prime:
Enter a number: 34
Not prime
Instead of putting the prime-testing details in main, we’ll define a separate func¬
tion that returns true if its parameter is a prime number and false if it isn't.
When given a number n. the is_prime function will divide n by each of the
numbers between 2 and the square root of n; if the remainder is ever 0. we know
that n isn’t prime.
*/

#include <stdbool.h>//library for boolean values
#include <stdio.h>

bool is_prime(int n)
{
    int divisor; //declaration

    if(n <= 1)
    {
        return false;//parameter 1 is not a prime number
    }

    for(divisor = 2; divisor * divisor <= n; divisor++)
    {
        if(n % divisor == 0)
        {
            return false; //parameter is not a prime number because it is divisible by other digit
        }else{
            return true; // is a prime number
        }
    }
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n))
    {
        printf("Prime number\n");
    }else{
        printf("Not prime\n");
    }

    return 0;
}