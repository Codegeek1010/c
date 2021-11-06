/*Sample Array Problem*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[6];
    printf("Enter your numbers:\n");
    for (i = 0;i < 6;i++)
    {
        scanf("%f\n",&a[i]);
    }
    for (i = 0;i < 6; i++)
    {
        printf("\nArray element at index %d is: %d",i,a[i]);
    }
    for (i = 6;i >= 0; i--)
    {
        printf("\nArray element at index %d is: %d",i,a[i]);
    }
    
    return 0;
}
