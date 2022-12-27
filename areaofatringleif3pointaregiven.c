//area=sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("enter three numbers:");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of a tringle is :%.3lf\n",area);
    return 0;
}