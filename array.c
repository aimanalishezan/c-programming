// array is a collection of variables of same data types exp;marks[10];
//array indask always start from zero [0]
#include<stdio.h>
int main()
{
    int num[5];
    num[0]=1;
    num[1]=2;
    num[2]=3;
    num[3]=4;
    num[4]=5;
    int sum=num[0]+num[1]+num[2]+num[3]+num[4];
    printf("%d\n",sum);
    //different type of array declaration
    int marks[]={1,2,3,4,};
    int dev=num[0]-num[1]-num[2]-num[3]-num[4];
    printf("%d",dev);
}