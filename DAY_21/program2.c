// --> Write a program to Reverse a string:--

#include <stdio.h>
#include <string.h>
int main()
{
    int temp;
    char str[100]; // 100 as max possible word limit
    printf("Enter the string : ");
    scanf("%[^\n]", &str);

    int x = strlen(str);

    for (int i = 0, j = x - 1; i < j ; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("\nREVERSE STRING IS : ");
    printf("%s",str);
    return 0;
}