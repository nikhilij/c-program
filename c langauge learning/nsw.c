// 2-D array example
#include<stdio.h>
int main()
{
    int marks[2][4]={{24,33,24,26},{2,3,3,4}};
    for(int i =0; i<2; i++){
        for (int j = 0; j < 4; j++)
        {
        printf("the value of %d,%d element of an array is %d\n",i,j,marks[i][j]);
    }
}
return 0;
}