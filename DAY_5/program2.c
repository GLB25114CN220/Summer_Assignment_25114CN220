// *--> Program to check the strong number:--

#include<stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void strong_num(int b)
{
    int num=b;
    int ld;
    int sum = 0;
    while (b != 0)
    {
        ld = b % 10;
        sum = sum + (factorial(ld));
        b = b / 10;
    }
    if(sum==num)
    {
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is not a strong number",num);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    strong_num(n);
    return 0;
}