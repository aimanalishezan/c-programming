#include<stdio.h>
int main()
{
    char s1[10]="aiman";
    char s2[10]="mim";
    char temp[10];

    printf("before swapping\n");
    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);
    printf("\n");
    
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("after swapping\n");
    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);

}