#include<stdio.h>
// declaration
void printhello();
int main()
{   printhello();//function call
    printhello();// by calling 3 times- print the particular 3 times
    printhello();
    return 0;
}
// definition
void printhello(){
    printf("hello world\n");
    printf("my name is nikhil\n");
}