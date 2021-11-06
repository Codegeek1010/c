/*No argument with no return type*/
#include<stdio.h>

void sum(void);

void main()
{
    sum();
}

void sum(void)
{
    int a=6,b=7,sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}