// --> program to Recursive reverse number:--

#include <stdio.h>
void reverse(int a)
{
    if (a < 0)
    {
        return;
    }
    printf("%d\n", a);
    reverse(a - 1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    reverse(n);
    return 0;
}