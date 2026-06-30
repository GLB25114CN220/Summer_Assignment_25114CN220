// --> Write a program to Create mini library system :--

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    int bookId[n];
    float price[n];
    char bookName[n][50];
    char authorName[n][50];

    // Input book details
    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);

        printf("Enter Author Name: ");
        scanf("%s", authorName[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);
    }

    // Display book details
    printf("\n\n========== LIBRARY RECORD ==========\n");
    printf("ID\tBook Name\tAuthor\t\tPrice\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               bookId[i], bookName[i], authorName[i], price[i]);
    }

    return 0;
}