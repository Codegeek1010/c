/*basic even and odd finder*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2)
        printf("%d is odd\n",i);
        else
        printf("%d is even\n",i);
    }
}
