#include<stdio.h>
int main()
{
    double C;
    printf("Enter C:");
    scanf("%lf",&C);
    double result=round(C);
    printf("%.2lf",result);
    return 0;
}