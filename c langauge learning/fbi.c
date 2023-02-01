#include<stdio.h>
int fibb(int n);
int main()
{
    int n;
    printf("enter the number to find fibbonacci");
    scanf("%d",&n);
    fibb(n);
    printf(" fibbonacci of number %d is =%d",n,fibb(n));
    return 0;
}
int fibb(int n){
    if (n==0)
    {
        return 0;
    }
    if ((n==1))
    {
        return 1;        /* code */
    }
    int fibbnm1=fibb(n-1);
    int fibbnm2=fibb(n-2);
    int fibbN=fibbnm1-fibbnm2;
    printf("the fibonacci is:%d",n,fibbN);
    return fibbN;
}