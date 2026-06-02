// --> program to Convert decimal to binary:--

#include<stdio.h>
void dividing_tool(int num)
{
    if(num == 0)
    {
        return;
    }
    int remainder = num % 2;
    num = num / 2;
    dividing_tool(num);
    printf("%d ",remainder);
}
int main()
{
    int n;
    printf("Enter the decimal number:");
    scanf("%d",&n);

    printf("The value of %d into binary form is :--\n\n",n);
    dividing_tool(n);
    return 0;
}