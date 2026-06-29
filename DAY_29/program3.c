// --> Write a program to Create menu-driven string operations system :--

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], copy[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Strings\n");
        printf("2. Find Length of First String\n");
        printf("3. Copy First String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("First String : %s\n", str1);
            printf("Second String: %s\n", str2);
            break;

        case 2:
            printf("Length of First String = %lu\n", strlen(str1));
            break;

        case 3:
            strcpy(copy, str1);
            printf("Copied String = %s\n", copy);
            break;

        case 4:
            strcpy(copy, str1);
            strcat(copy, str2);
            printf("Concatenated String = %s\n", copy);
            break;

        case 5:
            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 6:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}