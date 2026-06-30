// --> Write a program to Develop complete mini project using arrays, strings and functions :--

#include <stdio.h>

#define MAX 100

int roll[MAX];
float marks[MAX];
char name[MAX][50];
int total = 0;

void addStudent();
void displayStudents();
void searchStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[total]);

    printf("Enter Name: ");
    scanf("%s", name[total]);

    printf("Enter Marks: ");
    scanf("%f", &marks[total]);

    total++;

    printf("Student Added Successfully!\n");
}

void displayStudents()
{
    if (total == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for (int i = 0; i < total; i++)
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent()
{
    int r;
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (int i = 0; i < total; i++)
    {
        if (roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student Not Found!\n");
    }
}