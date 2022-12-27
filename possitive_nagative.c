#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num>0)
    printf("possitive");

    else if(num<0)
    printf("negative");

    else
    printf("0");

    return 0;
}