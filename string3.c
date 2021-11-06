/*C program to compare two strings*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[30],s2[30];
    int value,i,flag=0;
    printf("enter string 1: ");
    gets(s1);
    printf("enter string 2: ");
    gets(s2);
    //value=strcmp(s1,s2);/*Here we use predefined function"strcmp"*/
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Same Same");
    }
    else
    {
        printf("Not Same");
    }
    
    
    return 0;
}
