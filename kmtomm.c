/*Conversion of KM into MM*/
#include<stdio.h>
int main(float km,float mm)
{
    printf("Enter distane in Kilometers: ");
    scanf("%f",&km);

    mm=1000000*km;

    printf("Distance in Milimeters is: ");
    printf("%f",mm);
    return 0;
}
