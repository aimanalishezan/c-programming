//erite a varible name that contains number
/*write a program that print float double and charecter 
*/
#include<stdio.h>
int main ()
{
    int num=10;// int data type and 'num'is variable(name) 
    int num2=20;
    int aiman=19;
    int ali=17;
    float aiman1=1.2;
    double point=1.626377;
    char aimanis='A';//use '' to store data in  char variable 
    printf("number is %d\n",num);//%d is use for int data type 
    printf("number is %d\n",num2);
    printf("age is  %d,%d\n",aiman,ali);//for escape use \n
    printf("aiman1 is %.2f\n",aiman1);//'%f' is use for float data type.if you want to get 1 or 3 number after point then type %.1or3f what you want
    printf("points are %lf\n",point);// %lf is use for double data type 
    printf("aiman starts with %c\n",aimanis);// %c use for char data type 

    return 0;
}