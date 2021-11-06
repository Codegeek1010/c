/*Increment and Decrement operation in Pointer*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={3,2,6,4,75};
    int *p;
    p=&a[0];

    printf("Address is %u\n",p);
    printf("%d %d\n",*p--,*p--);
    printf("Address is %u\n",p);
    printf("%d\n",*p);
    printf("Address is %u\n",p);
    return 0;
}
