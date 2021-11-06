/*C program to find length of string*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char name[30];
    int count=0,i=0;
    printf("enter the name:");
    gets(name);
    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    
    //count=strlen(name);/*using predefined function "strlen"*/
    //puts(name);
    printf("Length of the string is:%d",count);
    return 0;
}
