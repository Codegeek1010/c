/*Area of square*/
#include<stdio.h>
int square()
{
    float side;
    printf("Enter the Length of the side in meters:");
    scanf("%f",&side);
    return side*side;
}
int main()
{
    printf("Area of square\n");
    float area = square();
    printf("The area of Square:%f\n",area);
    return area;
}
