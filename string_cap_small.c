#include<stdio.h>
int main()
{
    char s1[20];
    int cap,sm,dg,i;
    i=cap=sm=dg=0;
    printf("Enter a sentense:");
    gets(s1);

    while(s1[i]!='\0')
    {
        if(s1[i]>=65&&s1[i]<=90)//using the asky values
        
        cap++;
        else if(s1[i]>=97&&s1[i]<=122)
        sm++;
        else if(s1[i]>=48&&s1[i]<=57)
        dg++;

        i++;
    }
    printf("number of capital letter: %d\n",cap);
    printf("number of small letter: %d\n",sm);
    printf("number of digit: %d\n",dg);
}