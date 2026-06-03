// --> program to Recursive sum of digits:--

#include<stdio.h>
int sum(int a)
{
    if(a<=0)
    {
        return 0;
    }
    int num;
    num = a + sum(a-1);
    return num;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int result = sum(n);
    printf("The sum of all the digits till the given number is : %d",result);
    return 0;
}