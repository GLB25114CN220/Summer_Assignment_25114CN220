// --> Write a program to Create ATM simulation :--

#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin, choice;
    float balance = 10000.0, amount;

    printf("=====================================\n");
    printf("       WELCOME TO XYZ ATM\n");
    printf("=====================================\n");

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("\nIncorrect PIN! Access Denied.\n");
        return 0;
    }

    do
    {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nCurrent Balance: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: Rs. ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance += amount;
                printf("Deposit Successful!\n");
                printf("Updated Balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid Amount!\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: Rs. ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid Amount!\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                balance -= amount;
                printf("Please collect your cash.\n");
                printf("Remaining Balance: Rs. %.2f\n", balance);
            }
            break;

        case 4:
            printf("\nThank you for using XYZ ATM.\n");
            printf("Have a Nice Day!\n");
            break;

        default:
            printf("Invalid Choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}