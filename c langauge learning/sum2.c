#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
    int sum(int n){
    if(n==1){
        return 1;
    }
    int sum1=sum(n-1);
    int sumn= sum1+n;
    return sumn;

}