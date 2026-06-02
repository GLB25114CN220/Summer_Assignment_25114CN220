// --> program to Count set bits in a number:--

#include <stdio.h>
int dividing_tool(int num, int count)
{
    if (num == 0)
    {
        return count;
    }
    int remainder = num % 2;
    num = num / 2;
    count++;
    dividing_tool(num,count);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    
    int result = dividing_tool(n, 0);
    printf("The total bits in a given number are:%d", result);
    return 0;
}