/*Function Declaration*/
#include<stdio.h>
//float sum(void);//function declaration
char fun();//function declaration
void main()
{
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}
char fun()
{
    char c;
    printf("Enter the Character:");
    scanf("%c",&c);
    return c;//After using 'c' program will return at the end only c not we have given
}
/*void main()
{
    sum();//function calling
}
float sum()//function definition
{
    float a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("Sum of the numbers are:%f\n",sum);
}*/