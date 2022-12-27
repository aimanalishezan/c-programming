#include<stdio.h>
int main()
{
    char s1[]="i love you ";
    char s2[]="my love";

    strcat(s1,s2);//you can also use that strcat(s1,"my love");
    printf("str1=%s\n",s1);
}