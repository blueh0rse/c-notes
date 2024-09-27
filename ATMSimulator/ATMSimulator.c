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
        printf("\n* WITHDRAW *\n\n");

        float withdraw = 5.0;

        printf("Amount: ");
        scanf("%f", &withdraw);

        if (withdraw < 5.0)
        {
            printf("Error! Cannot withdraw less than 5.\n");
        }
        else if (withdraw > balance)
        {
            printf("Error! Balance is insuficient.\n");
        }
        else
        {
            printf("Done! Previous balance: %f\n", balance);
            balance -= withdraw;
            printf("Done! Current balance: %f\n", balance);
        }

        break;
    case 3:
        printf("\n* DEPOSIT *\n\n");
        break;
    case 4:
        printf("\n* LOGOUT *\n\n");
        break;
    default:
        printf("* NOT VALID *\n\n");
        break;
    }

    return 0;
}
