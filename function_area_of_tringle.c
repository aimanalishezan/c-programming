#include<stdio.h>
double tringlearea(double b,double h)
{
    return .5*b*h;
}
int main()
{
    double base,height;
    printf("enter base:");
    scanf("%lf",&base);
    printf("enter height:");
    scanf("%lf",&height);

    double area=tringlearea(base,height);
    printf("The area is = %.2lf\n",area);
}