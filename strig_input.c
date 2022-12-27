#include<stdio.h>
int main()
{
char s1[30];
printf("Enter your full name :");
gets(s1);/*gets is alternative for scanf beacuse scanf cannot store the value with dash*/

printf(" your full name is :%s\n",s1);

}
