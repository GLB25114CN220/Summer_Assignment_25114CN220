// --> program to Convert binary to decimal:--

#include <stdio.h>
#include <math.h>
int binary(int b)
{
    return pow(2, b);
}
int decimal_num(int a)
{
    int ld;
    int st;
    int count = -1;
    int sum = 0;
    while (a != 0)
    {
        ld = a % 10;
        count++;
        st = ld * binary(count);
        sum = sum + st;
        a = a / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Input the binary value:");
    scanf("%d", &n);
    
    int result = decimal_num(n);
    printf("The decimal value of %d is : %d",n,result);
    return 0;
}