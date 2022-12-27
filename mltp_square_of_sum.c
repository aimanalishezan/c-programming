//1square+2sq+3sq+......n
#include<stdio.h>
int main()
{
    int n1,i,sum=0;
    printf("Enter n:");
    scanf("%d",&n1);
    
    for(i=1;i<=n1;i++)
    {   
        sum=sum+i*i;
    }
    printf("sum is %d",sum);
    return 0;
}