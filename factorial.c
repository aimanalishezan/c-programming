#include<stdio.h>
int main()
{while(1){
    int i,fact=1,n;
    printf("\nEnter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
    return 0;
}