/**
 * switch (expression){
 * case: constant-expression: statement;
 * ...
 * case: constant-expression: statement;
 * ...
 * default: statements;
 * }
*/
#include <stdio.h>
int main(void)
{
    int grade;

    printf("Enter your score out of 5: ");
    scanf("%d", &grade);

    switch(grade){
        case 5: printf("Perfect");
                break;
        case 4: printf("Excellent");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Fail");
                break;
        default: printf("Invalid score!");
                 break;
    }

    return 0;
}