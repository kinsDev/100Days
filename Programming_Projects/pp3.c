/**
 * Modify the program of Programming Project 2 so that it prompts the user to enter the radius
ofthe sphere.
*/
#include <stdio.h>

int main(void){
    float cubicRadius, volume;

    printf("Radius of Sphere: ");
    scanf("%f", &cubicRadius);

    cubicRadius = 10.0f * 10.0f * 10.0f;
    volume = (4.0f / 3.0f) * 3.14285714286 * cubicRadius;

    printf("Volume of Sphere: %.2f", volume);

    return 0;
}