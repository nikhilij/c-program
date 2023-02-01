#include<stdio.h>
void printname(char arr[]);
int main(){
   char  firstname[]="Nikhil";
   char  lastname[]="Soni";
   printname(firstname);
   printname(lastname);
   
    return 0;
}
void printname(char arr[]){
    for (char i = 0;arr[i]!='\0'; i++)
    {
        /* code */printf("%c",arr[i]);
    }
    printf("\n");
}
