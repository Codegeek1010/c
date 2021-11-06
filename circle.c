/*Area of Circle*/
#include<stdio.h>
int main(float r)
{
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    
    printf("Area = %f",3.14*r*r);

    printf("\nCircumference = %f",2*3.14*r);
    
    return 0;
}
