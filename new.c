/*Write a program to find the difference between the sum of two diagonals of 3×3 matrix?*/
#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int a[3][3],i,j;
    int sumr=0,sum=0,d,e;

    printf("Enter elements of matrix:\n");
    
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
         scanf("%d",&a[i][j]);
       }
    }
    printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       if(i=j)
       {
       printf("The left diagonal elements are %d\t",a[i][j]);
       sum=sum+a[i][j];
       }
       printf("The sum of left diagonals is: %d",sum);
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(i+j==2)
            {
                printf("The right diagonal elements are %d\t",a[i][j]);
                sumr=sumr+a[i][j];
            }
            printf("The sum of right diagonal is:%d",sumr);
        }
    }
    d=sum-sumr;
    e=sumr-sum;
    if (sum>sumr)
    printf("The difference between the sum of the elements of the two diagonals is: %d ",d);
    else
    printf("The difference between the sum of the elements of the two diagonals is: %d",e);

    return 0;
}