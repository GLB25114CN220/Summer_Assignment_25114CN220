// --> Write a program to Create library management system :--

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

int main()
{
    struct Book book[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", book[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            book[n].issued = 0;
            n++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID: %d", book[i].id);
                    printf("\nTitle: %s", book[i].title);
                    printf("\nAuthor: %s", book[i].author);
                    printf("\nStatus: %s\n",
                           book[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    printf("\nBook Found");
                    printf("\nTitle: %s", book[i].title);
                    printf("\nAuthor: %s", book[i].author);
                    printf("\nStatus: %s\n",
                           book[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    if (book[i].issued == 0)
                    {
                        book[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book Already Issued!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    if (book[i].issued == 1)
                    {
                        book[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    else
                    {
                        printf("Book Was Not Issued!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}