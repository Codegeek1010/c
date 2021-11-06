/*Passing Array as an argument*/
#include<stdio.h>
int avg(int[]);
void main()
{
    int marks[5]={10,15,20,30,45},size,average;
    size=sizeof(marks)/sizeof(marks[0]);
    average=average(marks,size);
    printf("Average is %d\n",average);
    printf("Inside main size of array is(in bytes):%d\n",sizeof(marks));
}
int avg(int marks1[],int size)
{
    int i,sum=0;average=0;
    for(i=0;i<size;i++)
    {
        sum=sum+marks[i];
    }
    average=sum/size;
    printf("Inside avg function size of array is(in bytes):%d\n",sizeof(marks1));
    return average;

}