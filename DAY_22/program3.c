// --> Write a program to Character frequency :--

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int freq[256] = {0}; // frequency array for all ASCII characters

    printf("Enter a string: ");
    scanf("%[^\n]", str); // read full line including spaces

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    // Display frequencies
    printf("\nCharacter frequencies:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}