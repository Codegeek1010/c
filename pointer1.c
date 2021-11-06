/*Pointer Assignment*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=10,y=5;
    int *p,*q;
    p=&x;
    q=&y;
    //q=p;
    //*q=*p;
    printf("%d %d %d",x,*p,*q);
    return 0;
}
