#include<stdio.h>
void display(int a[])

{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int num[]={10,20,38,90};
    
    display(num);
}