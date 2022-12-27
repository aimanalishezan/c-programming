#include<stdio.h>
int main()
{
    int x=10,y=23,temp;
    int *p,*p2;
    p=&x;
    p2=&y;

    temp=*p;
    *p=*p2;
    *p2=temp;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}