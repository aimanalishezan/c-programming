#include<stdio.h>
enum days_of_weak
{
    
    sun,mon,tue,wed,thu,fri,sat

};
int main()
{
    enum days_of_weak day1,day2;
    day1=sun;
    day2=wed;
    int dif=day2-day1;
    printf("day difference =%d\n",dif);
}