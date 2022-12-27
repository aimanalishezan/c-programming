#include<stdio.h>
union test
{
    int a,b;
};
int main()
{
    union test t1;
    t1.a=10;
    printf("t1.a=%d\n",t1.a);
    printf("t1.b=%d\n",t1.b);

    t1.b=20;
    printf("t1.a=%d\n",t1.a);
    printf("t1.b=%d\n",t1.b);

    getch();
}