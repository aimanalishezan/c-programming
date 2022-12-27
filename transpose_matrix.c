#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,row,column;
    printf("Enter row and column for the matrix:");
    scanf("%d %d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("transpose matrix = ");
    for(i=0;i<column;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
            
        }
        printf("\n");
        printf("\t\t");
    }
}