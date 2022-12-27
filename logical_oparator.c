#include<stdio.h>
int main()
{
    int aiman,mim,galib;
    printf("Enter age of aiman:\nenter age of mim:\nenter age of galib:\n");
    scanf("%d\n%d\n%d",&aiman,&mim,&galib);

    if(aiman>mim&&aiman>galib)
    printf("elder is aiman %d",aiman);

    else if(mim>aiman&&mim>galib)
    printf("elder is mim %d",mim);

    else if (galib>aiman&&galib>mim)
    printf("elder is galib %d",galib);

    else 
    printf("smaller");
    
    return 0;
}