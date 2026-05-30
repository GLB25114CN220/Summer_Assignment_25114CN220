// *--> Program to find the lcm of two numbers using (logic)

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("n1-->");
    scanf("%d", &n1);
    printf("n2-->");
    scanf("%d", &n2);

    // using ternary operators:--
    int max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("The lcm of %d and %d is %d", n1, n2, max);
            break;
        }
        max++;
    }
    return 0;
}