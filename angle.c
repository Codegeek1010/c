/*Program to find third angle of a traingle*/
#include<stdio.h>
int main(int a,int b)
{
    printf("Enter two angles: ");
    scanf("%d %d",&a,&b);
    
    printf("Third angle of a triangle is: %d",180-(a+b));

    return 0;
}
