#include<stdio.h>
int main()
{
    char name[50];
    char dob[200];
    printf("enter name : ");
    scanf("%s",&name);
    printf("Enter DOB : ");
    scanf("%s",&dob);
    printf("your name is : %s\n",name);
    printf("your dob is : %s\n",dob);
    return 0;
}