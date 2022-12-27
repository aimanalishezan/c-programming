#include<stdio.h>
int main()
{
    int marks[100],n;
    int sum=0,i;
    printf("how many numbers you want to print:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    printf("sum is:%d\n",sum);
    printf("avarage is:%.2f",(float)sum/n);//hera (float)is type custing for chenaging the type of data . 
}