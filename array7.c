#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][3],i,j;
    printf("Enter elements of array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
