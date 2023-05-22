#include <stdio.h>
int main(void){
    int a = 2;
    int b = 4;
    int c = b + a * a / b - a;

    printf("%i", c);

    return 0;
};