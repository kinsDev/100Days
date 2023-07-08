/*
To get more experience with external variables, we'll write a simple game-playing
program. The program generates a random number between 1 and 100. which the
user attempts to guess in as few tries as possible. 

Here’s what the user will see when the program is run:

Guess the secret number between 1 and 100.

A new number has been chosen.

Enter guess: 55
Too low; try again.
Enter guess: 65
Too high; try again.
Enter guess: 60
Too high; try again.
Enter guess: 58
You won in 4 guesses!
Play again? (Y/N) y
A new number has been chosen.
Enter guess: 18.
Too high; try again.
Enter guess: 34
You won in 2 guesses!
Play again? (Y/N) n

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(int min, int max)
{
    //seed the random number generator as per the current time ensuring the program produces a different number every time it runs
    srand(time(NULL)); //NULL is used so that the random number can't be stored in the time function
    int random_number = (rand() % (max - min + 1)) + min;
    return random_number;
}

int main(void)
{
    //range values for min and max
    int min = 1;
    int max = 100;
    int random_number, guess, num_guesses;
    char play_again;

    do
    {
        printf("Guess the random number between %d and %d\n", min, max);
        random_number = generate_random_number(min, max);
        printf("A new number has been chosen.\n");
        num_guesses = 0;

        do
        {
            printf("Enter guess: ");
            scanf("%d", &guess);
            num_guesses++;

            if(guess < random_number)
            {
                printf("Too low; try again!\n");
            }else if(guess > random_number)
            {
                printf("Too high; try again!\n");
            }else
            {
                printf("You won in %d guesses!\n", num_guesses);
            }
        }while(guess != random_number);
        
        printf("Play again? (Y/N): ");
        scanf("%c", &play_again);
    }while(play_again == 'Y' || play_again == 'y');

    printf("Thanks for playing!\n");
    return 0;
}

/*
To generate random numbers in C, you can use the rand() function from the <stdlib.h> library. 
However, the rand() function alone will generate the same sequence of pseudo-random numbers each time you run the program, as it is initialized with a fixed seed value. 
To get different random numbers each time, you can use the srand() function to seed the random number generator with a changing value, such as the current time.
*/