#include<stdio.h>
int main()
{
    int a[10]={20,23,43,45,55};
    int *p;
    int i;                                                            
    p=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        p++;
    }
}