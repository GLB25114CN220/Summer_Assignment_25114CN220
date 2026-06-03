// *--> program to Recursive Fibonacci:--

#include <stdio.h>
int fibonacci(int a)
{
    if (a <= 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else // This is called Euler's Tree
    {
        int ans1 = fibonacci(a - 1);
        int ans2 = fibonacci(a - 2);
        int final_ans = ans1 + ans2;
        return final_ans;
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("The fibonacci series till the nth term is:--\n\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}