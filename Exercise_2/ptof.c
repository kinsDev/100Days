/**Pritnf(p) to float(5)*/

/**
 * Write calls ofprintf that display a float variable x in the following formats.
(a) Exponential notation; left-justified in a field ofsize 8; one digit after the decimal point.
(b) Exponential notation; right-justified in a field of size 10; six digits after the decimal
point.
(c) Fixed decimal notation: left-justified in a field of size 8; three digits after the decimal
point.
(d) Fixed decimal notation; right-justified in a field of size 6: no digits after the decimal
point.
*/

#include <stdio.h>
int main(void){
    printf("%-8.1e\n", 25);
    printf("%10.6e\n", 25);
    printf("%-8.3f\n", 25);
    printf("%6.0f\n", 25);
}