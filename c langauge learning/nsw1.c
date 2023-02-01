#include <stdio.h>
int main()
{
    char n;
    float ktm = 0.621371;
    float inchtofeet = 0.8333;
    float ctoi = 0.39;
    float ptokg = 0.454;
    float itom = 0.0254;

    while (1)
    {
        printf("enter the input character. q to quit\n    1.kms to miles\n    2.inch to feet \n    3.centimetre to inches\n    4.pound to kilogram\n    5.inches to metre\n    ");
        scanf("%c", &n);
        switch (n)
        {
        case 'q':
        printf("quiting the process...");
        goto end;
        break;
        default:
        printf("this");
        break;
        }
    }
    end:
    return 0;
}