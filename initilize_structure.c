#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1={27,464773.443};
    struct person person2,person3;

    person2.age=23;
    person2.salary=3836.44;

     person3=person2;
    

    printf("person1 : \n");
    printf("age is : %d\n",person1.age);
    printf("salary is : %.2f\n",person1.salary);

    printf("person2 : \n");
    printf("age is : %d\n",person2.age);
    printf("salary is : %.2f\n",person2.salary);

    printf("person2 : \n");
    printf("age is : %d\n",person3.age);
    printf("salary is : %.2f\n",person3.salary);


}