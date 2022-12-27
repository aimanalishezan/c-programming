#include<stdio.h>
int main()
{
    int num1=20;
    int num2=5;
    
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("num1:%d\n",num1);
    printf("num2:%d",num2);
    return 0;
}