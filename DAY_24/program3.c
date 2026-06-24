// --> Write a program to Find longest word :--

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[200];
    char longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0, len = 0;
    while (str[i] != '\0')
    {
        if (!isspace(str[i]) && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0'; // null terminate
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    // Final check for last word
    if (len > maxLen)
    {
        maxLen = len;
        strncpy(longest, &str[start], len);
        longest[len] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}