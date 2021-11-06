#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][3],i,j,sum=0;
    printf("Enter elememts of Matrix: ");

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
            printf("%d",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nSum=%d",sum);
    return 0;
}
