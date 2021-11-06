/*Void Pointer*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    void *vp;
    int a=5;
    float b=1.87;
    char ch='c';

    vp=&a;
    printf("a=%d\n",*(int*)vp);

    vp=&b;
    printf("b=%f\n",*(float*)vp);

    vp=&ch;
    printf("ch=%c\n",*(char*)vp);
    return 0;
}
