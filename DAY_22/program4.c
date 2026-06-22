// **--> Write a program to Remove spaces from string :--

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

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i]; // copy non-space characters forward
            j++;
        }
    }
    str[j] = '\0'; // terminate new string

    printf("String without spaces: %s\n", str);
    return 0;
}