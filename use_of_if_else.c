#include<stdio.h>
int main()
{
    int aiman,mimi;
    printf("aiman's age=");
    scanf("%d",&aiman);
    printf("mim's age=");
    scanf("%d",&mimi);

    if(aiman>mimi)
    printf("they can marry ('-') ");
    else if(aiman<mimi)
    printf("they cannot marry (-_-)");
    else//if and else if need condition but else don't need any conditon.
    printf("they can marry with lot's of risk(-!-)");

   
    return 0;
}