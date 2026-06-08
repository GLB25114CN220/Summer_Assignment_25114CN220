// --> program to Write function for Armstrong:--

#include <stdio.h>
int count(int num, int b)
{
    int st = 1;
    int c = 0;
    while (num != 0)
    {
        num = num / 10;
        c++;
    }
    for (int j = 1; j <= c; j++)
    {
        st = st * b;
    }   
    return st;
}
void Armstrong(int a)
{
    int o = a;
    int ld;
    int sum = 0;
    while (a != 0)
    {
        ld = a % 10;
        sum = sum + count(o, ld);
        a = a / 10;
    }
    if (sum == o)
    {
        printf("%d is an Armstrong number", o);
    }
    else
    {
        printf("%d is not an Armstrong number", o);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    Armstrong(n);
    return 0;
}