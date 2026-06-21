// --> Write a program to Find string length without strlen().

#include <stdio.h>
int main()
{
    char str[100]; // 100 as max possible word limit
    printf("Enter the string : ");
    scanf(" %[^\n]", &str);

    int i = 0;
    int size = 0;

    while (str[i] != '\0')
    {
        size++;
        i++;
    }

    printf("STRING LENGTH IS : %d", size);
    return 0;
}