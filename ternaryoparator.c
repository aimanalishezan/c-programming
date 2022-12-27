#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    large=(num1>num2)?num1:num2;//if true work this site:IF false work this site.
    printf("the large number is :%d",large);
    return 0;
}