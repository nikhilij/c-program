#include<stdio.h>
void swap(int a,int b);
int main(){
    int x=3;
    int y=5;
swap(x,y);
printf("x= %d and y= %d\n",x,y);
    return 0;
}
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a= %d and b= %d\n",a,b);
}