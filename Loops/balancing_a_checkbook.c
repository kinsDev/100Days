/**
 * Many simple interactive programs are menu-based: they present the user with a list
of commands to choose from. Once the user has selected a command, the program
performs the desired action, then prompts the user for another command.
This process continues until the user selects an ••exit” or "quit” command.
The heart of such a program will obviously be a loop. Inside the loop will be
statements that prompt the user for a command, read the command, then decide
what action to take:

for (;;) {
prompt user to enter command;
read command;
execute command;
}

Executing the command will require a switch statement (or cascaded if statement):

for (; ;) {
prompt user to enter command;
read command ;
switch (command) {
case command1: perform operation1; break;
.
.
.
case commandn: perform operationn; break;
default: print error message; break;
 }
} 
*/

/**
Let's develop a program that maintains a checkbook balance. 
The program will offer the user a menu of choices: 
clear the account balance, 
credit money to the account, 
debit money from the account, 
display thecurrent balance, 
and exit the program. 
The choices are represented by the integers 0, 1, 2, 3, and 4, respectively.
*/
#include <stdio.h>
int main(void)
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit");

    for ( ; ;){
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd){
            case 0: balance = 0.0f; break;
            case 1: printf("Enter amount of credit: ");
                    scanf("%f", &credit);
                    balance += credit;
                    break;
            case 2: printf("Enter amount of debit: ");
                    scanf("%f", &debit);
                    balance -= debit;
                    break;
            case 3: printf("Current balance: %.2f\n", balance);
            case 4: 
                    return 0;
            default:
                    printf("Commands are 0=clear, 1=credit, 2=debit, 3=balance, 4=exit");
                    break;
        }
    }
    return 0;
}