// --> program to Write function to find maximum:--

#include<stdio.h>
int max(int a,int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int n1,n2;
    printf("Enter the number 1:");
    scanf("%d",&n1);
    printf("Enter the number 2:");
    scanf("%d",&n2);

    int result = max(n1,n2);
    printf("The maximum of the two numbers is:%d",result);
    return 0;
}