/*Pointer Problems*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[]="Hello and Welcome";
    char *ptr =str;
    printf("Address of ptr=%u\n",ptr);
    printf("%c\n",*ptr);
    printf("Address of ptr=%u\n",ptr);
    printf("%c\n",*(ptr++ +1));
    printf("Address of ptr=%u\n",ptr);
    printf("%d\n",*((ptr-- +5)-1)+3);
    printf("Address of ptr=%u\n",ptr);
    printf("%c\n",(++ptr+10)-32);
    printf("Address of ptr=%u\n",ptr);
    printf("%c %c %c\n",*ptr,*++ptr,*--ptr);
    return 0;
}
