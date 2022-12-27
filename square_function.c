#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num ;
    printf("Eneter any intigier number:");
    scanf("%d",&num);
    int result=square(num);
    printf("The square is = %d",result);
}