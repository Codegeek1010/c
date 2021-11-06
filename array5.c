#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    printf("-----------------------------\n");
    printf("Enter 10 array elements:\n");
    for(i=0;i<10;i++)
    {
        printf("elements - %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array: ");
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
