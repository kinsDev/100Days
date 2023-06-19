/**
 * if (expression)
 * {
 * statement;
 * }
 */

/*#include <stdio.h>
int main(void)
{
    int n = -1;

    if (n < 0){
        printf("n is less than 0\n");
    } else if (n == 0) {
        printf("n is equal to o\n");
    } else{
        printf("n is greater than 0\n");
    }

    return 0;
}*/

/**
 * if (expression){
 * statement;
 * } else if(expression){
 * statement;
 * } else { statement };
 * return 0;
*/

#include <stdio.h>
int main(void)
{
    int grade, input;

    printf("What is your grade out of 5? ");
    scanf("%d", &grade);

    if(grade > 5){
        printf("Invalid score");
    }

    if(grade == 4){
        printf("Excellent");
    }else if(grade == 3){
        printf("Good");
    }else if(grade == 2){
        printf("Average");
    }else if(grade == 1){
        printf("Poor");
    }else if(grade == 0){
        printf("Fail");
    }

    return 0;
}