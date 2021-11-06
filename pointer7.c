/*Pointer Problem*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("Address is %u\n",p);
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("Address is %u\n",p);
    printf("%d\n",*p);
    printf("Address is %u\n",p);
    printf("%d\n",(*p)++);
    printf("Address is %u\n",p);
    printf("%d\n",(*p)++);
    printf("Address is %u\n",p);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("Address is %u\n",q);
    printf("%d\n",*(p+2)-2);
    printf("Address is %u\n",p);
    printf("%d\n",*(p++-2)-1);
    printf("Address is %u\n",p);
    return 0;
}
