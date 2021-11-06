/*Addition of pointers*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5]={1,90,3,-4,-3};
    int *p=&a[0];
    int *q=&a[0];

    printf("Value is %d\n",*p);
    printf("Address of element is:%u\n",p);
    p=p+4;
    *p=34;
    printf("Value is %d\n",*p);
    printf("Address of element is:%u",p);
    return 0;
}
