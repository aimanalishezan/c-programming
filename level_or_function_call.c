#include<stdio.h>
int main()
{
    int a=1;
    print:
    printf("%d\t",a);// use (\t) for tab .
    a++;
    if(a<5)
    goto print;
    return 0;
}