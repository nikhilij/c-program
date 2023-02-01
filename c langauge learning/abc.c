// ``write a loop for a numer to be divisible by 7, after entering any number exit!!``~nikhil
#include<stdio.h>
int main()
{
    int n;
    do{
    printf("enter a number= ");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%7==0) {
        break;
    }

    }while (1);
    printf("thank you\n");

    return 0;
}