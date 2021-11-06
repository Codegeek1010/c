/*Pointer to Pointer Concept*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;
    **q=25;

    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",**q);
    printf("a=%d\n",***r);

    printf("Address of q=%x %x\n",r,&q);
    printf("Address of p=%x %x\n",&p,q);


    return 0;
}
