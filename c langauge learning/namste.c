#include<stdio.h>
void namaste();// function declaration
void bonjour();
int main(){
    char c;
    printf("print f for french and i for indian = ");
    scanf("%C",&c);
    if (c=='i')
    {
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}
