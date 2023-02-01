#include<stdio.h>
float finalcp(float p);
int main()
{
    float price[3];
    printf("enter the price of first item = ");
    scanf("%d",&price[0]);
    printf("enter the price o0f second item = ");
    scanf("%d",&price[1]);
    printf("enter the price of third item = ");
    scanf("%d",&price[2]);
    printf("final price incl. GST is = ",finalcp(p));
    return 0;
    
}
    float finalcp(int price){
    float price[3];
    float p=(((price[0]+price[1]+price[2])*0.18+price[0]+price[1]+price[2]));
    return p;
}