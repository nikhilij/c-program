#include<stdio.h>
// c programm to find factorial of a given number(input from user) using function method~nikhil
int fact(int n);
int main()
{   
    int n;
    printf("enter a number to find its factorial = ");
    scanf("%d",&n);
    printf("the factorial is %d",fact(n));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int fact1= fact(n-1);
    int fact= fact1*n;
    return fact;
}