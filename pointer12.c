/*Dangling Pointer(Need to learn more about this)*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    ptr=NULL;
    printf("%d\n",*ptr);
    return 0;
}
