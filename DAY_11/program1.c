// --> program to Write function to find sum of two numbers:--

#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int n1, n2;
    printf("Enter the number 1:");
    scanf("%d", &n1);
    printf("Enter the number 2:");
    scanf("%d", &n2);

    int result = sum(n1, n2);
    printf("The sum of given numbers is:%d", result);
    return 0;
}