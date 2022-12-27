#include<stdio.h>
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    double result=ceil(x);//in  ceil libbary function produced the closest int nmber .
    printf("result is:%.2lf",result);
    return 0;
}