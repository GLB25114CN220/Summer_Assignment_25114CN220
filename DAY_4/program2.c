// --> program to find nth fibonacci term:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int num = n;
    int a = 0;
    int b = 1;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        if (i==num)
        {
            printf("The %dth fibonacci term is:%d", n, a);
            break;
        }
        a = b;
        b = sum;
    }
    return 0;
}