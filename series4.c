#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter value of n in 1+1/2+1/3+1/4+.......1/n:");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        if(i==1)
        printf("\n1+",i);
        else if(i==n)
        printf("(1/%.2lf)",i);
        else
        printf("(1/%.2lf)+",i);
    }
    printf("=%.2lf",sum);
    return 0;
}