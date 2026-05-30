// *-->  Program to Print prime numbers in a given range

#include <stdio.h>
int prime_num(int a)
{
    if (a < 2)
    {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;

    // here "1" represents i.e if the number is prime then prime_num
    // function will return true value to repeat function and 
    // where repeat function will be able to operate if and enter
    // into the if statement since the number is prime and hence
    // the checked prime number will print.
}
void repeat(int b, int t)
{
    while (t != b)
    {
        t++;
        if (prime_num(t))
        {
            printf("%d ", t);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("The prime numbers till the given number are:--\n");
    repeat(n, 0);
    return 0;
}