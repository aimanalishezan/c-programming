#include<stdio.h>
int main()
{
    float radious,area;
    printf("Enter radious:");
    scanf("%f",&radious);
    area=3.1416*radious*radious;
    printf("the area is=%.2f",area);
    return 0;
}