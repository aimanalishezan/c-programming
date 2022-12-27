#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter the last number of the series: ");
    scanf("%d",&num);
    printf("1+2+3+........+%d",num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("=%d",sum);
    return 0;
}