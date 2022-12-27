#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=20;a++)
    {
        if(a%3==0)// if this statement is true then by pass the condition by using continue.if false then go to next statement .
        continue;
        printf("%d\n",a);
        if(a==14)//if it true then stop the loop.
        break;
    }
    return 0;
}