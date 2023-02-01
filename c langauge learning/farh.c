#include <stdio.h>
// c programming by nikhil to convert given temperature(celsius to fahrenheit)----
float far(float value);//declare
//--------------------------------------
int main() {
    float value;
    printf("enter temperature in celsius : ");
    scanf("%f",&value);
    //-----------------------------------------------
    printf("the given temperature in fahrenheit is :%f\n",far(value));
    //------------------------------------------------------------------
    if (far(value)<=98)
    {
        printf("you do not have any fever !!!\n");
    }
    else if (far(value)>99 && far(value)<=101)
    {
        printf("You have fever take rest !!!\n");
    }
    else if (far(value)>=102){
        printf("You have high fever go and take consult with your doctor!!!\n");
        printf("get well soon best wishes nikhil\n");
    }
    else{
        printf("temperature is normal\n");
    }
    return 0;
}
//_________________________________
float far(float value)
{//calling
    float n = value*(9.0/5.0)+32;
    return n;
}