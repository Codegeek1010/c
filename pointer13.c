/*Dangling Pointer(Need to learn more about this)*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr=NULL;
    {
        int a=5;
        ptr=&a;
        printf("%d\n",*ptr);
    }
    printf("%d\n",*ptr);
    return 0;
}

