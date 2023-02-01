// use function to print list of 1 to 6 natural number (array) 
#include<stdio.h>
void printnum(int atr[],int n);
int main()
{
    int atr[]={1,2,3,4,5,6};
    printnum(atr,6);
    return 0;
}
void printnum(int atr[],int n){
    for (int i = 0; i < 6; i++)
    {
        /* code */printf("%d \t",atr[i]);
    }
    printf("\n");
}
