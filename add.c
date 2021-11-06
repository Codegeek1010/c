/*For adding numbers*/
#include<stdio.h>
int main(void)
{
    int n,N,i,Sum=0;
    printf("Total number you want to add: ");
    /*total number of numbers which you want to add say i want to add 5 numbers*/
    scanf("%d",&n);
    printf("Enter your numbers: ");
    /*enter number one by one say 12 56 76 78 98*/
    for(i=1;i<=n;i++)
    {
        scanf("%d",&N);
        Sum=Sum+N;
    }
    printf("Sum of given Numbers are %d",Sum
    );
    return 0;
}