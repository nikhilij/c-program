//write a programm to show adult, child, teenager~nikhil
#include<stdio.h>
int main() {
    int a;
    printf("Enter your age= ");
    scanf("%d",&a);

    if (a>18) {
        printf("you are an adult!!!\n");
    }
    else if (a>13 && a<=18) {
        printf("Teenager!!\n");
    }
    else {
        printf("child\n");
    }                           
    return 0;
}