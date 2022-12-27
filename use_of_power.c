#include<stdio.h>
int main()
{
    int A,B;
    printf("Enter any number A:");
    scanf("%d",&A);
    printf("Enter any number B:");
    scanf("%d",&B);
    double result= pow(A,B);//use pow libbary function for power of two  number like 2^2.
    printf("result=%.2lf",result);
    return 0;
}