#include<stdio.h>
int sum(int a, int b);
int main(){
    int a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter first number = ");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum is %d",s);
    return 0;
    
}
int sum(int a, int b){
    return a+b;
}