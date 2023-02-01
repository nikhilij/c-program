//use switch method to display day name by just entering number from 1 to 7 ~nikhil
#include<stdio.h>
int main() {
    int day;//1-mon; 2-tues; 3-wed;4-thu;5-fri;6-sat;7-sun
    printf("enter day(1-7) : ");
    scanf("%d",&day);
    switch (day) {
        case 1 : printf("monday");
                 break;
        case 2 : printf("tuesday");
                 break;
        case 3 : printf("wednesday");
                 break;
        case 4 : printf("thursday");
                 break;
        case 5 : printf("friday");
                 break;
        case 6 : printf("saturday");
                 break;
        case 7 : printf("sunday");
                 break;
        default : printf("not a valid entry");
                 
                 
    }
    return 0;
}