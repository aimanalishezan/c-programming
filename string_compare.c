#include<stdio.h>
int main()
{
    char s1[]= "aiman ali";//if you put dash on line it might be error beacuse string also count the dash
    char s2[]="aiman ali";

    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("strings are equal");
    
    }
    else
        printf("strings are not equal");
}