// --> program to Write function to find factorial:--

#include<stdio.h>
int factorial(int a)
{
    int fact = 1;
    for(int i=1;i<=a;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int result = factorial(n);
    printf("The factorial of the given number:%d",result);
    return 0;
}