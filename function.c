/*Basics of Function*/
#include<stdio.h>


void sum()
{
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of the numbers are :%d\n",sum);
}
int main()
{
    sum();
    printf("Kaisa Laga\n");
    sum();
    printf("Aur batao\n");
    sum();
    printf("Bass Ho Gya aab\n");
}