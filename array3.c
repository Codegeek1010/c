/*Sum of two array*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],b[5],SumArr[5],i;
    printf("Enter First elements:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter Second elements:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        SumArr[i]=a[i]+b[i];
        printf("\nThird Array element at index %d is: %d",i,SumArr[i]);
    }
    
    return 0;
}
