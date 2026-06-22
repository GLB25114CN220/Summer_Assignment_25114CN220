// --> Write a program to Check palindrome string :--

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int temp, n;
    printf("Enter the character limit : ");
    scanf("%d", &n);

    char str[n]; // 100 is the max possible word limit.
    printf("Enter the string : ");
    scanf(" %[^\n]", str);

    int size = strlen(str);

    bool flag = true;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        printf("PALINDROME STRING");
    }
    else
    {
        printf("NOT A PALINDROME STRING");
    }
    return 0;
}