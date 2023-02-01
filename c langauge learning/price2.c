#include<stdio.h>
int main()
{
    float price[3];
    printf("enter price of 1st item = ");
    scanf("%f",&price[0]);
    printf("enter price of 1st item = ");
    scanf("%f",&price[1]);
    printf("enter price of 1st item = ");
    scanf("%f",&price[2]);
    float total=((price[0]+price[1]+price[2])*0.18)+(price[0]+price[1]+price[2]);
    printf("the total price including with GST is =%f",total);
    return 0;

}