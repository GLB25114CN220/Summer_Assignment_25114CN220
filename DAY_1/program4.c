// --> Program to count total digits in a given number 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int ld = 0;
    int m=n;
    while (m != 0)
    {
        m = m / 10;
        ld++;
    }
    printf("The total number of digits in the given number is:%d", ld);
    return 0;
}''