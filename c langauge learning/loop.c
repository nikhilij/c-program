#include<stdio.h>
// print the numbers from 0 to n, if n is given by user ~nikhil
int main(){
    int n;
    printf("enter a number= ");
    scanf("%d",&n);
    int a=0;
    while(a<=n){
    printf("%d ",a);
    a++;
    }
    return 0;
}