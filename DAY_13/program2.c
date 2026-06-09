// --> Write a Program to find Sum and Average of Array:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int input[n];
    int sum = 0;
    for (int i = 0; i <= (n-1); i++)
    {
        scanf("%d", &input[i]);
        sum += input[i];
    }
    printf("sum--> %d\n", sum);
    printf("Average-->%f\n", (sum / (n*1.0)));
    return 0;
}