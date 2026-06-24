// --> Write a program to Remove duplicate characters :--

#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str)
{
    int len = strlen(str);
    int index = 0;       // Position for the result
    int seen[256] = {0}; // Track ASCII characters

    for (int i = 0; i < len; i++)
    {
        if (seen[(unsigned char)str[i]] == 0)
        {
            str[index++] = str[i];           // Keep character
            seen[(unsigned char)str[i]] = 1; // Mark as seen
        }
    }
    str[index] = '\0'; // Null terminate
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}