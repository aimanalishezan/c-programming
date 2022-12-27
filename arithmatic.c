#include<stdio.h>
int main()
{
int num1,num2,sum;
float avg;//for average number we need to use float data type.
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
sum=num1 + num2;
printf("the sum is:%d\n",sum);
avg=(float)sum/2;//the conversion of data type is called type casting.if you want to store a int data type variable into a float data type you need to convert it by using type casting.
printf("the average is :%f\n",avg);
return 0;
}