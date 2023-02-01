//display grade acc to their marks obtained via use of "if-else" method ~nikhil
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks obtained (0-100)= ");
    scanf("%d",&marks);
    if(marks>90 && marks<=100){
        printf("your grade is A++\n");
    }
    else if(70<=marks && marks<=90){
        printf("your grade is A\n");
    }
    else if(30<=marks && marks<70){
        printf("your grade is B\n");
    }
    else if(marks<30 && marks>0){
        printf("your grade is c\n");
    }
    else{
        printf("please enter a valid number");
    }
    return 0;
}