// write a c programm to take enteries for array from users-nikhil and also print the array after that
#include<stdio.h>
int main(){
int marks[4];
for(int i=0;i<4;i++)
{
    printf("enter the value of %d element of array\n", i);
    scanf("%d",&marks[i]);
}
for(int i=0;i<4;i++)
{
    printf("the value of %d element of array is %d\n", i,marks[i]);
}
return 0;
}