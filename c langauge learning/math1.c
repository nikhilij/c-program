#include<stdio.h>
#include<math.h>
// number will be greater than 9 and less than 100 
// number is two digit or not
int main()
{
    int a;
    printf("enter a number= ");
    scanf("%d",&a);
    printf("%d\n",a>9 && a<100);
}