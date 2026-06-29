// --> Write a program to Create menu-driven array operations system :--

#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int key, found = 0;
    int max, min, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Search Element\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 2:
            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    printf("Element found at index %d\n", i);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Element not found.\n");
            break;

        case 3:
            max = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }
            printf("Largest Element = %d\n", max);
            break;

        case 4:
            min = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] < min)
                    min = arr[i];
            }
            printf("Smallest Element = %d\n", min);
            break;

        case 5:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum of Elements = %d\n", sum);
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