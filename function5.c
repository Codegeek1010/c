/*No argument with return type*/
#include<stdio.h>
int sum();
void main()
{
    int s;
    s=sum();
    printf("Sum=%d",s);
}
int sum()
{
    int a=56,b=7;
    return a+b;
}