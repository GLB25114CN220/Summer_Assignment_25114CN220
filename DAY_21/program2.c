// --> Write a program to Reverse a string :--

#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Step 1: Find length of string
    while (str[length] != '\0')
    {
        length++;
    }
    // Step 2: Reverse the string
    j = length - 1;
    for (i = 0; i < length; i++)
    {
        rev[i] = str[j];
        j--;
    }
    rev[length] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}