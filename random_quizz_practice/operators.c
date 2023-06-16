/**
 * a++ - increments a variable after using it
 * ++a - increments a variable before using it
*/
#include <stdio.h>
int main (void) {
    int a = 2;
    int b;
    b = a++;
    return 0;/*marking the end of code - good practice*/
};


/*a ? b : c if a is evaluated to true then b statement is executed otherwise C is executed*/

    /**% = ld = Long int. ! = not? \n = new line*/


    /**Lets check the sizeof an integer*/
    #include <stdio.h>
    int main(void) {
        int age = 37;
        printf("%ld\n", sizeof(age));
        printf("%ld", sizeof(int));

        return 0;
    };


/**The ternary operator
 * <condition> ? <expression> : <expression>
 * e.g
 * a ? b : c
 * basically, if a is evaluated to true, then b is executed, otherwise c is executed 
*/


/**The Size of operator
 * It returns the size of operand you pass
*/
#include <stdio.h>
int main(void){
    int age  = 37;
    printf("%ld\n", sizeof(int));
    printf("%ld", sizeof(age));

    return 0;
};

#include <stdio.h>
int main(void){
    int a = 2;
    int b = 4;
    int c = b + a * a / b - a;

    printf("%i", c);

    return 0;
};