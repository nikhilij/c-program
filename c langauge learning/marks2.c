// c program to calculate percentage of 3 subjects~nikhil
#include<stdio.h>
float calcpercent(int x,int y,int z);
int main(){
    int a,b,c;
    printf("Enter the marks obtained in Maths : \n");
    scanf("%d",&a);
    printf("Enter the marks obtained in science : \n");
    scanf("%d",&b);
    printf("Enter the marks obtained in sanskrit : \n");
    scanf("%d",&c);
    //__________________________________
    calcpercent(a,b,c);
    printf("the percentage is :%2f",calcpercent(a,b,c));
    return 0;
}

    float calcpercent(int x,int y,int z){
        return ((x+y+z)/3);
    }
