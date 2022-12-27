#include<stdio.h>
int main()
{
    int num,num2,num3,sum;
    float avg;
    printf("enter three numbers:");
    scanf("%d %d %d",&num,&num2,&num3);

    sum=num+num2+num3;
    avg=(float)sum/3;//because of avg is a float number .so that we need to convert the sum into a float value.
    printf("the sum is=%d\n",sum);
    printf("avarage is=%.2f",avg);
    return 0;
}