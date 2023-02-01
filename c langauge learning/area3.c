#include<stdio.h>
float square_area(int side);// dec
int main()
{
    int side;
    printf("enter the length of side= ");
    scanf("%d",&side);
    
    printf("area of square of is =%f",square_area(side));
    return 0;
}
float square_area(int side){
    return side*side;
}
