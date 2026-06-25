// Write a program to Find common characters in strings :--

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Mark characters present in str1
    for (int i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");
    for (int j = 0; str2[j] != '\0'; j++)
    {
        if (freq[(unsigned char)str2[j]] == 1)
        {
            printf("%c ", str2[j]);
            freq[(unsigned char)str2[j]] = -1;
        }
    }

    return 0;
}