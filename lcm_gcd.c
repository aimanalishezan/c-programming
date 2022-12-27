#include<stdio.h>
int main()
{ while(1)
{
    int num1,num2,x,gcd,lcm,n1,n2;
    printf("Enter any number:");
    scanf("%d",&num1);
    printf("Enter any number:");
    scanf("%d",&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        x=n1%n2;
        n1=n2;
        n2=x;
    }
    gcd=n1;
    lcm=num1*num2%gcd;
    printf("gcd is :%d\n",gcd);//greatest common division
    printf("lcm is :%d\n",lcm);// least common multiple
}
    return 0;

}