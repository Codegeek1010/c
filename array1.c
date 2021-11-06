/*Sum and average of 5 students*/
#include<stdio.h>
void main()
{
    float marks[5];
    int i;
    float sum=0.0,avg;
    printf("Enter marks of 5 students:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&marks[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%f",sum);
    printf("\naverage=%f",avg);
}