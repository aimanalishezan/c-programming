#include<stdio.h>

struct person
{   
    char name[20];
    int age;
    float salary;
};

int main()
{
   struct person person[4];
   int i;
   
   for(i=0;i<4;i++)
   {
    printf("Enter inforamation for person%d\n",i+1);
    printf("Enter name:");
    gets(person[i].name);
    printf("Enter age:");
    scanf("%d",&person[i].age);
    printf("Enter salary:");
    scanf("%f",&person[i].salary);
   }
   for(i=0;i<4;i++)
   {
    printf(" \ninforamation for person%d\n",i+1);
    printf("name : %s\n",person[i].name);
    printf("age:%d\n",person[i].age);
    
    printf("salary:%f\n",person[i].salary);
    
   }

}