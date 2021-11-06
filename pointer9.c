/*Pointer Problems*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    const int a=-11;
    const int *ptr=&a;
    //*ptr=12; /*Cannot change the value if const is used*/
    printf("a=%d",a);
    return 0;
}
