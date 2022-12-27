#include<stdio.h>
int main()
{ 
    int num1,num2;
    char result;
    printf("\nEnter oparator(+,-,*,/):");
    scanf("%c",&result);
    printf("\nEnter any number:");
    scanf("%d",&num1);
    printf("\nEnter any number:");
    scanf("%d",&num2);
    switch (result)
    {
    case'+':
    result=num1+num2;
    printf("\n%d + %d = %d\n",num1,num2,result);
    break;
    case'-':
    result=num1-num2;
    printf("\n%d - %d = %d\n",num1,num2,result);
    break;
    case'*':
    result=num1*num2;
    printf("\n%d x %d = %d\n",num1,num2,result);
    break;
    case'/':
    result=num1/num2;
    printf("\n%d / %d = %d\n",num1,num2,result);
    break;
    default:
    printf("not a valid number");
    break;
    }
    return 0;

}