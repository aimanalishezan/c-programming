#include<stdio.h>
int main()
{
    int a=20,b=29,sum;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("sum is =%d\n",sum);
}
