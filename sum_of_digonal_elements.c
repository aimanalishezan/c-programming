#include<stdio.h>
int main()
{
    int a[10][10],row,column,sum=0,i,j;
    printf("Enter the number for row and column :");
    scanf("%d %d",&row,&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    
    }
    printf("entered matrix :");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==j)
            sum=sum+a[1][j];
        }
    }
    printf("\nsum of digonal elements is : %d\n",sum);
}