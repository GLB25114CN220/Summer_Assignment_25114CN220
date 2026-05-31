// *--> program to Print Armstrong numbers in a range:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("The Armstrong numbers till the given number are:-\n\n");

    for (int j = 1; j <= n; j++)
    {
        int recover = j;
        int num = j;
        int temp = j;

        // COUNTING THE NUMBER OF DIGITS:-

        int num_d = 0;
        while (temp != 0)
        {
            temp = temp / 10;
            num_d++;
        }
        // NOW CALCULATION FOR ARMSTRONG NUMBERs:-

        int ld;
        int sum = 0;
        int Multiply_ld ;
        while (recover != 0)
        {
            Multiply_ld = 1;
            ld = recover % 10;
            for (int k = 1; k <= num_d; k++)
            {
                Multiply_ld = Multiply_ld * ld;
            }
            sum = sum + Multiply_ld;

            recover = recover / 10;
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}