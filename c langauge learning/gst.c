// find the total price of product inclusive of 18% GST~nikhil
#include<stdio.h>
void calulprice(float value);
int main(){
    float value;
    printf("enter the price= ");
    scanf("%f",&value);
    calulprice(value);
    return 0;
}
void calulprice(float value){
    value = (0.18*value)+value;
    printf("final price of the product is %f",value);
}