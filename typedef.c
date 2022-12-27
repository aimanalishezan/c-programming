#include<stdio.h>
struct book
{
    char name[29];
    int price;
};
int main()
{
    typedef struct book book1;
    book1 b={"aiman ali shezan",350};
    printf("book name =%s\n",b.name);
    printf("book price =%d\n",b.price);

}