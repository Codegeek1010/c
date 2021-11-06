#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,sum,m,n,p,q,k;
    printf("Enter Rows and Columns for 1st Matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter 1st Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Rows and Columns for 2nd Matrix:\n");
    scanf("%d %d",&p,&q);
    printf("\nEnter 2nd Matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n1st Matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n2nd Matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if (n!=p)
    {
        printf("ERROR,CAN'T MULTIPLY");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
                //scanf("%d,&a[i][j]");
            }
            
        }
    }
        printf("Multiplication is:\n");
        for (i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
}
