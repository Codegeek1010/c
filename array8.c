#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],i,j,SumofRow,SumofColumn;
    printf("Enter elements of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&a[i][j]);
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
        SumofRow=0,SumofColumn=0;
        for(j=0;j<3;j++)
        {
            SumofRow=SumofRow+a[i][j];
            SumofColumn=SumofColumn+a[j][i];
        }
        printf("\nSumofRow=%d,SumofColumn=%d",SumofRow,SumofColumn);
    }
    return 0;
}
