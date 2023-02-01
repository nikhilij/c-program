#include<stdio.h>
// to print table of a number given by user
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    for (int i = 1; i<=10; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}