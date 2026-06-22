// **--> Write a program to Count words in a sentence :--

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the character limit of sentence : ");
    scanf("%d", &n);

    char str[n];
    printf("Enter the string : ");
    scanf(" %[^\n]", str);

    int count = 0;
    int inWord = 0; // 0 = Entry, 1 = Exit

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && inWord == 0)
        {
            inWord = 1;
            count++;
        }
        else if (str[i] == ' ')
        {
            inWord = 0; // reviving inword to '0'
        }
    }

    printf("The total number of words in a sentence are : %d\n", count);
    return 0;
}