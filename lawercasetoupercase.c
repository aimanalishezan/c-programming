#include<stdio.h>
int main()
{
    char lower;
    printf("enter the lowercase letter :");
    scanf("%c",&lower);
//always remember that lower case number is 32 short then uppercase.
    printf("the upercase letter:%c",lower-32);
    return 0;
}