/*
 * A constant is declared similarly to variables
 * e.g const int AGE = 22
 * It is better to use uppercases in constants and lowercase in variables
 * Like I have done on the above example.
 * */

/*Let me try to create a n example on C code*/

#include <stdio.h>
int main(void) {
	const int AMOUNT = 15608;
	int ANOTHERITEM = 10000;
	int TOTALPRICE = AMOUNT + ANOTHERITEM;
	printf("%d", TOTALPRICE);
}
