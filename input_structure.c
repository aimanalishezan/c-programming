#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1,person2;
    printf("Enter informaton for person1\n");
    printf("Enter age:");
    scanf("%d",&person1.age);

    printf("Enter salary : ");
    scanf("%f",&person1.salary);

    printf("person1 : \n");
    printf("age is : %d\n",person1.age);
    printf("salary is : %.2f\n",person1.salary);

    printf("Enter informaton for person2\n");
    printf("Enter age:");
    scanf("%d",&person2.age);

    printf("Enter salary : ");
    scanf("%f",&person2.salary);

    printf("person2 : \n");
    printf("age is : %d\n",person2.age);
    printf("salary is : %.2f\n",person2.salary);


}