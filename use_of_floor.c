#include<stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    double result=floor(x);//use floor to convert float number into int number
    printf("result is:%.2lf",result);
    return 0;
}