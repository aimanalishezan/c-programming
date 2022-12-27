#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    printf("small = %d",num1);

    else if (num1<num2)
    printf(" large = %d",num2);

    else 
    printf("Equal");
    return 0;
}