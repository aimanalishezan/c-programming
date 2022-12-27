#include<stdio.h>
int main()
{
    int a[]={12,23,43,54,2,5,66};
    int value,i;
    int possition=-1;
    printf("Enter number you want to see the pos:");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==a[i])
        {
            possition=i+1;
            break;
        }
        
    }
    if(possition==-1)
    {
        printf("not found");
    }
    else{
        printf("the value is found at %d possiton",possition);
    }
}