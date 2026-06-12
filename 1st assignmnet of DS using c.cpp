#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0, amount;

    do
    {
        printf("\n=================================\n");
        printf("      ATM BANKING SYSTEM\n");
        printf("=================================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nCurrent Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Amount Deposited Successfully!\n");
                    printf("Updated Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount Withdrawn Successfully!\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
                break;

            case 4:
                printf("\nThank You for Using ATM Banking System.\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}