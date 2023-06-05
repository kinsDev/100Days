/**
 * Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item     Unit Price    Purchase Date
583      $ 13.50       10/24/2010

The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include<stdio.h>
int main(void)
{
    int item_number, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: $");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t %.2f\t %02d/%02d/%4d\n", item_number, unit_price, month, day, year);

    return 0;
}

/**
 * As usual we have used #include as our standard input and output library
 * we have placed item, unit price, and purchase date on a new tab
 * we have then put item number on a new tab too as a digit
 * we have placed 2 decimal points on our unit price float and put it on a new tab too
 * we have also put slash on the dates so that the output can have slash
*/