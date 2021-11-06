/*Function with argument and with return type*/
#include<stdio.h>
float sum(float,float);

void main()
{
    float x,y,c;
    printf("Enter x and y: ");
    scanf("%f %f",&x,&y);
    c=sum(x,y);
    printf("sum=%c",c);
}

float sum(float a,float b)
{
    //float sum=0;
    //sum=a+b;
    return a+b;
}