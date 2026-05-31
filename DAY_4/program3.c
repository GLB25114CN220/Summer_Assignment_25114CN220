// --> program to check Armstrong number:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int check_num = n;
    int num = n;
    // IN ORDER TO COUNT THE NUMBER OF DIGITS:-
    int num_d = 0;
    while (n != 0)
    {
        n = n / 10;
        num_d++;
    }
    // NOW CALCULATING THE CHECKING OF ARMSTRONG NUMBER:-

    int ld;
    int sum = 0;
    int sum_ld;
    while (num != 0)
    {
        sum_ld = 1;
        ld = num % 10;
        for (int j = 1; j <= num_d; j++)
        {
            sum_ld = sum_ld * ld;
        }
        sum = sum + sum_ld;
        num = num / 10;
    }
    if (sum == check_num)
    {
        printf("%d is an Armstrong number", check_num);
    }
    else
    {
        printf("%d is not an Armstrong number", check_num);
    }
    return 0;
}