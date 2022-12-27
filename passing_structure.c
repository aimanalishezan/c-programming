#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("name : %s\n",p.name);
    printf("age : %d\n",p.age);
    printf("salary:%.2f",p.salary);
}
int main()
{
    struct person person1;
    strcpy(person1.name,"aiman ali");
    person1.age=18;
    person1.salary=25000.54;

    display(person1);
}