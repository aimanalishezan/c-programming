 #include<stdio.h>
 int main()
 {
    int x=9;
    int *p;
    p=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p);

    printf("value of x= %d\n",x);
    printf("adress of x =%u\n",&x);//adress always are posstive so use %u

 }