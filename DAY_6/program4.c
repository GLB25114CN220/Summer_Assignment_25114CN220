// --> program to Find x^n without pow()

#include <stdio.h>
void power(int a, int b)
{
    int num = 1;
    for (int i = 1; i <= b; i++)
    {
        num = num * a;
    }
    printf("The value of %d to the power %d is : %d", a, b, num);
}
int main()
{
    int x, n;
    printf("x-->");
    scanf("%d", &x);
    printf("n-->");
    scanf("%d", &n);

    power(x, n);
    return 0;
}