// --> Write a program to Check anagram strings :--

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256 // total ASCII characters

int main()
{
    char str1[100], str2[100];
    int freq[SIZE] = {0}; // frequency array

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency from first string
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != '\n' && str1[i] != ' ')
        {
            freq[(unsigned char)tolower(str1[i])]++;
        }
    }

    // Subtract frequency using second string
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '\n' && str2[i] != ' ')
        {
            freq[(unsigned char)tolower(str2[i])]--;
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < SIZE; i++)
    {
        if (freq[i] != 0)
        {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams!\n");
    return 0;
}