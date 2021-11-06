/*Basic String things*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[30];
    printf("Enter name:");
    gets(name);
    printf("%s",name);
    puts(name);
    return 0;
}
