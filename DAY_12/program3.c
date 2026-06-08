// --> program to Write function for Fibonacci:--

#include<stdio.h>
int fibonacci(int a)
{
    int n1 = 0;
    int n2 = 1;
    for(int i=1;i<=a;i++)
    {
        int sum = n1 + n2;
        printf("%d ",n1);
        n1 = n2;
        n2 = sum;
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}