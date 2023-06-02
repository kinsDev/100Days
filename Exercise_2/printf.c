/**
 * Whai output do the following calls ofprintf produce?
(a) printf("%6d,%4d" , 86, 1040);
(b) printf ("%12.5e", 30.253);
(c) printf ("%.4f" , 83.162);
(d) printf("%-6.2g", .0000009979);
*/

#include <stdio.h>

int main(void){
    printf("%6d,%4d\n", 86, 1040);
    printf("%12.5e\n", 30.253); // total number of digits will be 12. 5 decimal places first, then "e", and then adding zeros and lastly 1 when the 12th digit is reached
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);
}