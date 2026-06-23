// --> Write a program to Find maximum occurring character :--

#include <stdio.h>
#include <string.h>

#define SIZE 256 // total ASCII characters

int main()
{
    char str[100];
    int freq[SIZE] = {0}; // frequency array
    int max = -1;
    char result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        if (ch != '\n' && ch != ' ')
        { // ignore newline and spaces
            freq[ch]++;
        }
    }

    // Find character with maximum frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        if (ch != '\n' && ch != ' ')
        {
            if (freq[ch] > max)
            {
                max = freq[ch];
                result = ch;
            }
        }
    }

    if (max != -1)
        printf("Maximum occurring character: %c (appears %d times)\n", result, max);
    else
        printf("No valid characters found.\n");

    return 0;
}