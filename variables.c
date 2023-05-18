/**
 * C is a statically typed language. This means that it variables have an associated type and are ran at compile time.
 * When you create a variable in C you have to specify the type of of varable in declaration.
 * For example if its integer you can specify it like this int 22.
 * variables can contain any uppercase or lowercase, can have an underscore, and can contain digits.
 * But cannot start with a digit. e.g int 1age.
*/

/**You can also change the value of an intialized variable*/

#include <stdio.h>
int main(void){
    int age = 0;
    age = 22;
    printf("%u", age);
}

/**what's the work of the "%u"? I guess you gonna have to stick around to find out - that is ofcourse if you don't google😂*/
/**What are the c built in data types:
 * char - stores letters and in some cases integers from -128 to 127. Takes atleast 1byte
 * int - takes atleast 2bytes.
 * short - 2bytes.
 * long - 4bytes.
 * float - representing numbers to decimal points times powers of 10. Both +ve & -ve numbers. 10^-37 to 10^+37. 32bits
 * double - Does what float does with a bigger set of numbers.
 * long double - Does what float and double does but with a bigger set of numbers.
*/

/**Unsigned Integers:
 * unsigned char - 0 to 255.
 * unsigned int - 0 to 65,535.
 * unsigned short - o to 65,535.
 * unsigned long - 0 to 4294967295 
*/

/**what happens when you overflow?*/

#include <stdio.h>
int main(void){
    unsigned char j = 255;
    j = j + 10;
    printf("%u", j);
}

/**With a signed value, the behaviour is undefined*/

#include <stdio.h>
int main(void){
    char k = 127;
    k = k + 10;
    printf("%u", k);
}

/**With the three illustrated examplea above, i have realised that C does not support me from going over the limits, so I have to p[rotect myself on that.]*/

#include <stdio.h>
int main(void){
    char j = 128;
}

/**Check the size of types on your device*/

#include <stdio.h>
int main(void)
{
    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("short size: %lu bytes\n", sizeof(short));
    printf("long size: %lu bytes\n", sizeof(long));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("double size: %lu bytes\n",sizeof(double));
    printf("long double size: %lu bytes\n",sizeof(long double));
}  

