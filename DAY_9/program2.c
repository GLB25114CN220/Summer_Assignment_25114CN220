// -->  program to Print reverse number triangle:--

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int stair=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=stair;j++)
        {
            printf("%d",j);
        }
        stair--;
        printf("\n");
    }
    return 0;
}