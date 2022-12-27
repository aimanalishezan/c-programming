#include<stdio.h>
int main()
{
    int num,temp,r,sum=0,i,fact;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    printf("%d is a strong number",num);
    else
    printf("%dnot a strong number",num);

    return 0;
}