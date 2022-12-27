#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("even ");
    if(num%2!=0)
    printf("odd ");
    return 0;
}