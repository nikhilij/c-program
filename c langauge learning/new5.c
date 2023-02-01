#include<stdio.h>
int length(char arr[]);
void printname(char arr[]);

int main(){
    char name[100];
    fgets(name, 100,stdin);
    printf("your name is : %s",name);
    printf("your name length is :%d\n",length(name));
    return 0;
}

int length(char arr[]){
    int count=0;
    for (int i = 0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}
void printname(char arr[]){
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}