// --> program to Write function for perfect number:--

#include <stdio.h>
int perfect_num(int a)
{
    int fact = a;
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (fact % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    int result = perfect_num(n);
    if (result == n)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
    return 0;
}