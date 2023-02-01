#include<stdio.h>
int main()
// print all odd numbers between 5 to 50 __nikhil
{
    for(int i=5; i<=50; i++){
        if (i%2==0) continue;
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}