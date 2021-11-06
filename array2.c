/*Program to check even odd*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    int even=0,odd=0;
    printf("Enter array element:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("Total even number are:%d",even);
    printf("\nTotal odd number are:%d",odd);
    return 0;
}
