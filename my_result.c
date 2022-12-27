#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>100||marks<0)
    printf("invaulid marks");
    else if(marks>=80&&marks<=100)
    printf("A+");
    else if(marks>=70&&marks<=80)
    printf("A");
    else if(marks>=60&&marks<=70)
    printf("A-");
    else if(marks>=50&&marks<=60)
    printf("B");
    else if(marks>=40&&marks<=50)
    printf("D");
    else if(marks>=33&&marks<=40)
    printf("E");
    else
    printf("F");
    return 0;

}