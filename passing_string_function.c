#include<stdio.h>
void display(char s[])
{
    int i;
    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
}
int main()
{
    char s[]="aiman ali shezan";
    display(s);
}