/*C program to concatinate two strings*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int l1,l2,i;
    char s1[30]="Thank\t";
    char s2[30]="You";
    //strcat(s1,s2);/*Here we concatinate using predefined function "strcat"*/
    strncat(s1,s2,3);/*Here we use another predefined function "strncat""*/
    /*l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }*/
    printf("String aftr concatination is: %s\n",s1);
    return 0;
}
