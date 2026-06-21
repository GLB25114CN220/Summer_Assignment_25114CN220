// --> Write a program to Count vowels and consonants :--

#include <stdio.h>
#include <string.h>

int main()
{
    int count_vowels = 0;
    int count_consonants = 0;

    char str[100]; // 100 for max possible word limit
    printf("Enter the string : ");
    scanf(" %[^\n]", &str);

    int size1 = strlen(str);

    char vowels[] = "aeiouAEIOU"; // strlen only works on proper C strings (null-terminated).
    int size2 = strlen(vowels);

    for (int i = 0; i < size1; i++)
    {
        int check = 0;
        for (int j = 0; j < size2; j++)
        {
            if (str[i] == vowels[j])
            {
                check = 1;
                count_vowels++;
            }
        }
        if (check == 0 && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) // in order to get rid from spaces
        {
            count_consonants++;
        }
    }

    printf("\nCONSONANTS = %d\n", count_consonants);
    printf("VOWELS = %d\n", count_vowels);
    return 0;
}