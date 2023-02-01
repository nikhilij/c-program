#include<stdio.h>
int main()
// c programming to find factorial of number___nikhil
{
    int n;
    printf("enter a number to find its factorial = ");
    scanf("%d",&n);

    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of the number is : %d",fact);
    return 0;
}