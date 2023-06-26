/**
Write a program that generates a “random walk” across a 10 x 10 array. The array will
contain characters (all ' . ' initially). The program must randomly “walk” from element to
element, always going up, down, left, or right by one element. The elements visited by the
program will be labeled with the letters A through Z. in the order visited. Here's an example 
of the desired output:
A. . . . . . . . . .
BCD. . . . . . . . .
.FE. . . . . . . . .
HG . . . . . . . . .
I. . . . . . . . . .
J. . . . . . . . Z .
K  . . R S T U V Y .
L  M P Q . . . W X .
.  N O . . . . . . .
.  . . . . . . . . .
Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
After generating a number, look at its remainder when divided by 4. There are four possible
values for the remainder—0. 1.2, and 3—indicating the direction of the next move. Before
performing a move, cheek that (a) it won't go outside the array, and (b) it doesn’t take us to
180 Chapter 8 Arrays
an element that already has a letter assigned. If either condition is violated, try moving in
another direction. If all four directions are blocked, the program must terminate. Here's an
example ofpremature termination:
A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
Y is blocked on all four sides, so there’s no place to put Z.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 10
#define EMPTY '.'

void generateRandomWalk(char walk[SIZE][SIZE]);

int main(void)
{
    char walk[SIZE][SIZE];

    generateRandomWalk(walk);

    // Print the random walk
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void generateRandomWalk(char walk[SIZE][SIZE])
{
    int row, col, direction;
    char step = 'A';

    // Initialize the walk array with empty spaces
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            walk[i][j] = EMPTY;
        }
    }

    // Set the seed for random number generation
    srand(time(NULL));

    // Start at the center of the array
    row = SIZE / 2;
    col = SIZE / 2;
    walk[row][col] = step++;

    // Perform random walk until termination condition is met
    while (step <= 'Z')
    {
        // Check for available directions
        bool upAvailable = (row > 0 && walk[row - 1][col] == EMPTY);
        bool downAvailable = (row < SIZE - 1 && walk[row + 1][col] == EMPTY);
        bool leftAvailable = (col > 0 && walk[row][col - 1] == EMPTY);
        bool rightAvailable = (col < SIZE - 1 && walk[row][col + 1] == EMPTY);

        // If all directions are blocked, terminate
        if (!upAvailable && !downAvailable && !leftAvailable && !rightAvailable)
        {
            break;
        }

        // Choose a random direction
        do
        {
            direction = rand() % 4;
        } while ((direction == 0 && !upAvailable) || (direction == 1 && !downAvailable) ||
                 (direction == 2 && !leftAvailable) || (direction == 3 && !rightAvailable));

        // Move in the chosen direction
        switch (direction)
        {
        case 0: // Up
            walk[--row][col] = step++;
            break;
        case 1: // Down
            walk[++row][col] = step++;
            break;
        case 2: // Left
            walk[row][--col] = step++;
            break;
        case 3: // Right
            walk[row][++col] = step++;
            break;
        }
    }
}
