#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("capital latter");

    else if(ch>='a'&&ch<='z')
    printf("small latter ");
    else 
    printf("not a latter");
    return 0;
}