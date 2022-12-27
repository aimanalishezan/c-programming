#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter base:");
    scanf("%f",&base);

    printf("enter height:");
    scanf("%f",&height);

    area=(float)1/2*base*height;// to store the value of the area you need to convert the int data type into float data type by using type conversion.
    printf("area is=%.2f",area);

    return 0;
}
