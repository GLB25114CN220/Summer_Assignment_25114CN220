// -->  program to Check strong number

#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void last_digit(int a)
{
    int number = a;
    int ld;
    int sum = 0;
    while (a != 0)
    {
        ld = a % 10;
        sum = sum + factorial(ld);
        a = a / 10;
    }
    if(sum == number)
    {
        printf("%d is a strong number",number);
    }
    else{
        printf("%d is not a strong number",number);
    }
}
int main()
{
    int n;
    printf("Enter the  number:");
    scanf("%d", &n);

    last_digit(n);
    return 0;
}