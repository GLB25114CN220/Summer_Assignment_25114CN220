// --> Write a program to Compress a string :--

#include <stdio.h>
#include <string.h>

void compressString(char *str)
{
    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++)
    {
        // Print current character
        printf("%c", str[i]);

        // Count consecutive occurrences
        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Print count if more than 1
        if (count > 1)
        {
            printf("%d", count);
        }

        // Reset count
        count = 1;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}