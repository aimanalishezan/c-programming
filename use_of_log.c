#include<stdio.h>
int main()
{
    double C;
    printf("Enter C:");
    scanf("%lf",&C);
    double result=log(C);
    printf("%lf",result);
    return 0;
}