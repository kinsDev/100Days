/**Lets calc the volume of a rectangle in c*/
#include <stdio.h>
int main(void){
    int height;
    int width;
    int length;
    int volume;

    height = 8;
    width = 10;
    length = 12;
    volume = height * width * length;
    printf("%i\n", volume);

    return 0;
}