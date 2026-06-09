// --> Write a program to Input and display array:--

#include <stdio.h>
int main()
{
    int marks[5]; // program to get marks of students as an
                  //  input by using arrays
                  
    printf("The marks of students as provided by user are:--\n");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("\n");

    printf("The display of marks of each student are:--\n");
    for (int j = 0; j <= 4; j++)
    {
        printf("[%d]  ", marks[j]);
    }
    return 0;
}   