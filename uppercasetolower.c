#include<stdio.h>
int main()
{
    char uppercase;
    printf("enter any uppercse letter:");
    scanf("%c",&uppercase);

    printf("the lower case letter:%c",uppercase+32);
    return 0;
}