/**
 * Write a program that computes the volume of a sphere with a 10-meler radius, using the 
 * formula v = 4/37tr\ Write the fraction 4/3 as 4 . Of/3 . Of. (Try writing it as 4/3. What 
 * happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself
twice to compute r3.
*/

/**
 * find volume
 * radius  = 10 meter, it will be a float value
 * formula = (4/3)πr^3, where pie = 3.14285714286
 */

#include <stdio.h>

int main(void){
    float cubicRadius, volume;

    cubicRadius = 10.0f * 10.0f * 10.0f;
    volume = (4.0f / 3.0f) * 3.14285714286 * cubicRadius;

    printf("Volume of Sphere: %.2f", volume);

    return 0;
}

/**Lets modify the code so that user can key in their own values*/
/*int main(void){
    float cubicRadius, volume;

    printf("Radius of Sphere: ");
    scanf("%f", &cubicRadius);

    cubicRadius = 10.0f * 10.0f * 10.0f;
    volume = (4.0f / 3.0f) * 3.14285714286 * cubicRadius;

    printf("Volume of Sphere: %.2f", volume);

    return 0;
}*/
