#include<stdio.h>
int main()
{
    double base,exp,result;
    printf("Enter base:");
    scanf("%lf",&base);
    printf("Enter exponent:");
    scanf("%lf",&exp);

    result =pow(base,exp);
    printf("%.2lf",result);
}