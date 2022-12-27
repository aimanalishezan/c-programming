//there is two types of varaible local and global. 
#include<stdio.h>
int aiman=18;//the varaible which is use before the main function,called gobal varaible.
int main()
{   // the varaible which is use after the main funtion,called local varaible.
    printf("inside the main function:%d\n",aiman);
    display();
}
void display()
{
    printf("outside the main function:%d\n",aiman);
    
}