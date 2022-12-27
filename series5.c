#include<stdio.h>
int main()
{
    int num,mul=1,i;//remeber that 0xnumber is equal to zero,so mul=1;
    printf("Enter the last number of the series: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        mul=mul*i;
    }
    printf("%d",mul);
    return 0;
}