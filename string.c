//use %s formate spacifier for string
#include<stdio.h>
int main()
{
    char s1[6];
    char s2[6]={'a','i','m','a','n','\0'};//'\0'means string is finised
    char s3[]="AIMAN ALI";//you can declare string in double cotation
    char s4[]="aiman ali \
                    shezan";//for multipale line use the line breaking \ charecter
    s1[0]='A';
    s1[1]='I';
    s1[2]='M';
    s1[3]='A';
    s1[4]='N';
    s1[5]='\0';//always have to use nall charecter in the last index;
    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);
    printf("s3= %s\n",s3);
    printf("s4= %s\n",s4);

}