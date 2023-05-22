/**In this section we'll only be using one major include and int main command*/

/**Lets C what our condition is with C :)*/

/**We'll be using if and else statements to perform tasks that we might want to perform now and later
*/

#include <stdio.h>
#include <string.h>
int main(void){

/**The If statement:*/
int a  = 1;
if(a == 1){
    printf("%s\n", "Like this repository please :)");
} else {
    printf("%s", "Comment what the issue is");
}

/**Multiple if statements
 * Here we use string compare and string concatenate from the string.h library
 * we compare whether the string k and j are empty arrays, we concatenate them, otherwise we say
 * Nata(nothing!)
*/
char k[] = "kinsley";
char j[] = "kaimenyi";
if(strcmp(k, "") != 0 && strcmp(j, "") != 0){
    strcat(k, "");
    strcat(k, j);
    printf("%s\n", k);
}else{
    printf("Nata\n");
}


/**The switch statement
 * it is used when we have so many if statements
 * very simple
 * int a = 1;
 * switch(a) {
    * case 0:
    * do smth
    * break;
    * case 1: 
    * do something
    * break;
    * ..and so on
    * default:
    * do something for the case that does not exist
    * break;
 * }
*/



return 0;
}