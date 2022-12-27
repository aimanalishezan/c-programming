#include<stdio.h>
int main()
{
int num1,num2,result;

printf("Enter first number:");
scanf("%d",&num1);

printf("Enter second number:");
scanf("%d",&num2);

result=num1+num2;
printf("sum:%d\n",result);

result=num1-num2;
printf("subliment:%d\n",result);

result=num1*num2;
printf("multiply :%d\n",result);

result=num1/num2;
printf("devision:%d\n",result);

result=num1%num2;
printf("remainder:%d\n",result);


return 0;
}