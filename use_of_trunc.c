#include<stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    double result=trunc(x);//use trunc to convert float number into int number
    printf("result is:%.2lf",result);
    return 0;
}