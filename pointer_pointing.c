#include<stdio.h>
int main()
{
    int a=10,b=20,c=23;
    int *p;
    p=&a;
    printf("a=%d\n",*p);
    p=&b;
    printf("b=%d\n",*p);
    p=&c;
    printf("c=%d\n",*p);
}