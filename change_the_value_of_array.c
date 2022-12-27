#include<stdio.h>
int main()
{
    int array1[20],array2[20],n,i;
    printf("how many numbers you want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\narray1 :");
    for(i=0;i<n;i++)
    {
        printf("%d",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\narray2 :");
    for(i=0;i<n;i++)
    {
        printf("%d",array2[i]);
    }
}