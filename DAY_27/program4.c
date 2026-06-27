// --> Write a program to Create marksheet generation system.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
};

int main()
{
    struct Student s;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &s.m1);
    printf("Subject 2: ");
    scanf("%d", &s.m2);
    printf("Subject 3: ");
    scanf("%d", &s.m3);
    printf("Subject 4: ");
    scanf("%d", &s.m4);
    printf("Subject 5: ");
    scanf("%d", &s.m5);

    s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
    s.percentage = s.total / 5.0;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Total Marks : %d / 500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    if (s.percentage >= 60)
        printf("Division    : First Division\n");
    else if (s.percentage >= 45)
        printf("Division    : Second Division\n");
    else if (s.percentage >= 33)
        printf("Division    : Third Division\n");
    else
        printf("Division    : Fail\n");

    return 0;
}