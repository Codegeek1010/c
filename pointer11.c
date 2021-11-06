/*Null Pointer*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;
    int *p1=NULL;
    //int *p2;
    if(p1==NULL)
    {
        printf("This is NULL pointer");
    }
    else
    {
        printf("%d\n",*p1);
    }
    
    
    return 0;
}
