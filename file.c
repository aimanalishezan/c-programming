#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("test.text","w");
    if(file==NULL)
    {
    printf("File dosen't exist");
    }
    else
    {
        printf("File is opened");
        fclose(file);
    }
}