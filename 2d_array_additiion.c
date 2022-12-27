#include<stdio.h>
int main()
{
    int i,j,row,colum;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the number of row and colum:");
    scanf("%d %d",&row,&colum);
    printf("Enter the elements of a matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of b matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    printf("\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n\t");
    }
    printf("\nB = ");
    printf("\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n\t");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
printf("\nA+B = ");
    printf("\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n\t")
    }
}
