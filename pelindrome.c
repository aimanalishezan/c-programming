#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
    printf("pelindrome");
    else
    printf("not a valid number");
    return 0;
}