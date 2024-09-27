#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("ATM Simulator v1.0!\n\n");

    int choice = 0;
    float balance = 500.0;

    printf("Choose an operation:\n");
    printf("1 Check balance. \n");
    printf("2 Withdraw money.\n");
    printf("3 Deposit money. \n");
    printf("4 Logout.\n");

    printf("> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n* CHECK *\n\n");
        printf("Your balance is: %f\n", balance);
        break;
    case 2:
        printf("Salut gamin !");
        break;
    case 3:
        printf("Salut jeune !");
        break;
    case 4:
        printf("Salut ado !");
        break;
    default:
        printf("Je n'ai aucune reponse pour ton age");
        break;
    }

    return 0;
}
