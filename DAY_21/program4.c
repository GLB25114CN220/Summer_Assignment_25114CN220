// --> Write a program to Convert lowercase to uppercase :--

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf(" %[^\n]", &str);

    int size = strlen(str);

    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int x = (int)str[i];
            x = x - 32;
            char ch = (char)x;
            str[i] = ch;
        }
    }
    printf("Conversion from lowercase to uppercase is : %s", str);
    return 0;
}