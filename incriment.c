#include<stdio.h>
int main()
{
    int x=10;
    int y=x++;//post incriment use to up the number in next line when you use the x.y=10..
    int a=2;
    int b=++a;//b=3
    printf("x=%d\n",x);
    printf("y=%d\n",y);
   
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}