#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter :");
    scanf("%c",&lower);
    upper = toupper(lower);//use toupper libbary function to convert lower to upper case. 
    printf("the uppercase letter = %c",upper);
    return 0;
}