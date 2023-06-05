/**
 * Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form a magic square. The magic square shuwu here appears in a 1514
engraving by artist and mathematician Albrecht Diirer. (Note that the middle numbers in the
last row give the date ofthe engraving.)
*/
#include <stdio.h>

int main(void)
{
    int numbers[4][4];
    int row_sums[4] = {0};
    int column_sums[4] = {0};
    int diagonal_sum1 = 0, diagonal_sum2 = 0;
    int i = 0, j = 0;

    printf("Enter the numbers from 1 to 16 in any order:\n");

    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    row_sums[i] += numbers[i][0] + numbers[i][1] + numbers[i][2] + numbers[i][3];
    column_sums[0] += numbers[i][0];
    column_sums[1] += numbers[i][1];
    column_sums[2] += numbers[i][2];
    column_sums[3] += numbers[i][3];
    diagonal_sum1 += numbers[i][i];
    diagonal_sum2 += numbers[i][3 - i];

    i = 1;
    j = 0;
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    row_sums[i] += numbers[i][0] + numbers[i][1] + numbers[i][2] + numbers[i][3];
    column_sums[0] += numbers[i][0];
    column_sums[1] += numbers[i][1];
    column_sums[2] += numbers[i][2];
    column_sums[3] += numbers[i][3];
    diagonal_sum1 += numbers[i][i];
    diagonal_sum2 += numbers[i][3 - i];

    i = 2;
    j = 0;
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    row_sums[i] += numbers[i][0] + numbers[i][1] + numbers[i][2] + numbers[i][3];
    column_sums[0] += numbers[i][0];
    column_sums[1] += numbers[i][1];
    column_sums[2] += numbers[i][2];
    column_sums[3] += numbers[i][3];
    diagonal_sum1 += numbers[i][i];
    diagonal_sum2 += numbers[i][3 - i];

    i = 3;
    j = 0;
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    scanf("%d", &numbers[i][j++]);
    row_sums[i] += numbers[i][0] + numbers[i][1] + numbers[i][2] + numbers[i][3];
    column_sums[0] += numbers[i][0];
    column_sums[1] += numbers[i][1];
    column_sums[2] += numbers[i][2];
    column_sums[3] += numbers[i][3];
    diagonal_sum1 += numbers[i][i];
    diagonal_sum2 += numbers[i][3 - i];

    printf("\n");
    printf("%2d %2d %2d %2d\n", numbers[0][0], numbers[0][1], numbers[0][2], numbers[0][3]);
    printf("%2d %2d %2d %2d\n", numbers[1][0], numbers[1][1], numbers[1][2], numbers[1][3]);
    printf("%2d %2d %2d %2d\n", numbers[2][0], numbers[2][1], numbers[2][2], numbers[2][3]);
    printf("%2d %2d %2d %2d\n", numbers[3][0], numbers[3][1], numbers[3][2], numbers[3][3]);

    printf("\nRow sums: %d %d %d %d\n", row_sums[0], row_sums[1], row_sums[2], row_sums[3]);
    printf("Column sums: %d %d %d %d\n", column_sums[0], column_sums[1], column_sums[2], column_sums[3]);
    printf("Diagonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);

    return 0;
}
