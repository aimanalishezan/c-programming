#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};// use semi colon ater second bracet in structure 
int main()
{
    struct person person1,person2;

    person1.age=18;//you have to use dot oparator for structure 
    person1.salary=8489.98;
    printf("person1:\n");
    printf("age =%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary);
    
    person2.age=17;
    person1.salary=89.98;
    printf("person2:\n");
    printf("age =%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary);
    
}