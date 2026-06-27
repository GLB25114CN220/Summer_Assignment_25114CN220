// --> Write a program to Create salary management system.

#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    struct Salary s[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Employee ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &s[n].empId);

            printf("Enter Employee Name: ");
            scanf("%s", s[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &s[n].basicSalary);

            printf("Enter Bonus: ");
            scanf("%f", &s[n].bonus);

            s[n].totalSalary = s[n].basicSalary + s[n].bonus;

            n++;
            printf("Salary record added successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo salary records found.\n");
            }
            else
            {
                printf("\n--- Salary Records ---\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d\n", s[i].empId);
                    printf("Name: %s\n", s[i].name);
                    printf("Basic Salary: %.2f\n", s[i].basicSalary);
                    printf("Bonus: %.2f\n", s[i].bonus);
                    printf("Total Salary: %.2f\n", s[i].totalSalary);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].empId == id)
                {
                    printf("\nSalary Record Found!\n");
                    printf("Employee ID: %d\n", s[i].empId);
                    printf("Name: %s\n", s[i].name);
                    printf("Basic Salary: %.2f\n", s[i].basicSalary);
                    printf("Bonus: %.2f\n", s[i].bonus);
                    printf("Total Salary: %.2f\n", s[i].totalSalary);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Salary record not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}