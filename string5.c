/*C program to convert string from upper case to lower case*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i;
    char s1[30];
    printf("Enter the string: ");
    gets(s1);
   //strlwr(s1);/*Here we use predefined function for lowering letters "strlwr"*/
   //printf("String in lower case is %s\n",s1);
   //strupr(s1);/*Here we use predefined function for uppering letters "strupr"*/
   //printf("String in upper case is %s ",s1);
   for(i=0;s1[i]!='\0';i++)
   {
       if(s1[i]>='A'&& s1[i]<='Z')
       {
           s1[i]=s1[i]+32;
       }
   }
   printf("String is %s",s1);
    return 0;
}
