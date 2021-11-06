/*Function with argument without return type*/
#include<stdio.h>
 
void sum(float,float);

void main()
{
    float x,y;
    printf("Enter x and y: ");
    scanf("%f %f",&x,&y);
    sum(x,y);
}

void sum(float a,float b)
{
    //float sum=0;
    //sum=a+b;
    printf("Sum=%f",a+b);
}