//1.5+2.5+3.5+........+n
#include<stdio.h>
int main()
{
    float n1,i,sum=0;
    printf("Enter n:");
    scanf("%f",&n1);
    for(i=1.5;i<=n1;i++)
    {
        sum=sum+i;
    }
    printf("sum is %.2f",sum);
    return 0;
}