#include<stdio.h>
int main()
{
    float F,c;
    printf("Enter farenhight:");
    scanf("%f",&F);
    c=(F-32)/1.8;
    printf("cent=%.2f",c);
    return 0;
}