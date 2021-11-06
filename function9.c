/*GATE Problems*/
#include<stdio.h>
int incr(int i)
{
    static int count=0;
    count=count+i;
    return(count);
}
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=0;i<=4;i++)
       j=incr(i);
    printf("j=%d",j);
    return 0;
}
