// --> Write a program to Create student record system using arrays and strings :--

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n];
    float marks[n];
    char name[n][50];

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]); // Reads a single-word name

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n\n----- STUDENT RECORDS -----\n");

    printf("\nRoll\tName\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}