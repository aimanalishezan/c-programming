#include<stdio.h>
int main()
{
    int choice;
    printf("tempreture choice menu:\n");
    printf("1.fahrenheit to celsius:\n");
    printf("celsies to fahrenhiet:");
    printf("%d",&choice);
    switch (choice)
    {
    case 1:
       {
        printf("enter tempreture:");
        scanf("%f",&temp);
        convertedTemp =(temp-32)/1.8;
        printf("the fahrenhiet is in celsius:%f\n",convertedTemp);
        break;
       }
    case 2:
    {
        printf("enter tempreture:");
        scanf("%f",&temp);
        convertedTemp=(1.8*temp)+32;
        printf("the celsius is in fahrenhiet:%f\n",convertedTemp);
        break;
    }   
    
    default:
    printf("not a valid number");
    }
    return 0;
}