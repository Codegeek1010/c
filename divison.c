/*Division*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n,i,Res=0;
    printf("Enter Dividend and Divisor:");
    
    scanf("%f%f",&n,&i);
    
    Res=n/i;
    printf("Result is %f",Res);
    return 0;
}
