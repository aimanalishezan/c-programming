#include<stdio.h>
int main()
{
    char s1[20];
    printf("Enter your full name:");
    gets(s1);
    printf("name is =%s\n",s1);
    strrev(s1);// for reversing string use strrev libbary function 
    printf("reverse= %s\n",s1);
}