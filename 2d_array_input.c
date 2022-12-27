#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4];
    int b[3][4];
    printf("Enter the elements of a matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of b matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("B = ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}

