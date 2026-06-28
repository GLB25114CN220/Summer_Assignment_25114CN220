// --> Write a program to Create bank account system :--

#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank acc;
    int choice;
    float amount;

    do
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &acc.accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", acc.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc.balance);

            printf("Account Created Successfully!\n");
            break;

        case 2:
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            acc.balance += amount;
            printf("Amount Deposited Successfully!\n");
            printf("Current Balance: %.2f\n", acc.balance);
            break;

        case 3:
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if (amount <= acc.balance)
            {
                acc.balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Current Balance: %.2f\n", acc.balance);
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 4:
            printf("\n--- Account Details ---\n");
            printf("Account Number : %d\n", acc.accNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance         : %.2f\n", acc.balance);
            break;

        case 5:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}