#include<stdio.h>
void swapping(int *p1,int *p2)

{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int x=10,y=30;
    printf("before swapping :\nx=%d\ny=%d\n",x,y);
    swapping(&x,&y);
    printf("after swapping :\nx=%d\ny=%d\n",x,y);
}