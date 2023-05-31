/**
 * Here’s an improved version of the dimensional weight program in which the user
enters the dimensions. Note that each call of scanf is immediately preceded by a
call of printf. That way, the user will know when to enter input and what input
to enter.
*/

#include <stdio.h>
int main(void){
    int height;
    int width;
    int length;
    int volume;
    int weight;

    printf("Enter Height: ");
    scanf("%d", &height);
    printf("Enter Width: ");
    scanf("%d", &width);
    printf("Enter Length: ");
    scanf("%d", &length);

    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);
}