// --> Write a program to Create mini employee management system :--

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int empId[n];
    float salary[n];
    char empName[n][50];
    char department[n][50];

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Department: ");
        scanf("%s", department[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n\n========== EMPLOYEE RECORDS ==========\n");
    printf("ID\tName\tDepartment\tSalary\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t\t%.2f\n",
               empId[i], empName[i], department[i], salary[i]);
    }

    return 0;
}