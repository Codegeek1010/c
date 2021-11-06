/*Table of any number*/
#include<stdio.h>
int main()
{
    int i=1,Number=0;
    printf("Enter a number:");
    scanf("%d",&Number);
    do
    {
        printf("%d\n",(Number*i));
        i++;
    } while (i<=10);

return 0;

    
}