#include<stdio.h>
int main()
{
    int first=0,second=1,count=0,n,fibo;
    printf("Enter range:");
    scanf("%d",&n);
    while(count<n){
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }//never use return in loop.awlays use return outside of loop.
        return 0;
}