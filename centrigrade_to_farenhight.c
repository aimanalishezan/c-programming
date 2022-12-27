//f=(c*1.8)+32;formula to convert centigrade into farenhight.
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter centigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("farenhight:%.2f",f);
    return 0;
}