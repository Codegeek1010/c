/*Pointer Subtraction*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={0,1,6,7,-4};
    int *p=&a[0];
    int *q=&a[3];

    printf("q-p=%d\n",q-p);
    printf("p-q=%d\n",p-q);
    printf("Value=%d\n",*q);
    q=q-2;
    printf("Value=%d\n",*q);
    p=p+2;
    printf("q-p=%d\n",q-p);
    q=q-1;
    printf("Value=%d",*q);

    return 0;
}
