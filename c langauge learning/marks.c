// use if and else function to display pass or fail~nikhil
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained (0-100)= ");
    scanf("%d",&marks);
    if (marks>30 && marks<=100){
        printf("Pass\n");
    }
    else if(marks<=30){
        printf("fail");
    }
    else {
        printf("invalid marks, please enter a valid marks");
    }
    return 0;
}