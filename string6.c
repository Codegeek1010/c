/*basic use of string*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[50];
    int i=0;
    int count=0;
    int n;
    printf("Enter the word: ");
    scanf("%s",&n);
    while(i<50)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("The number of vowels %d",count);
    
    return 0;
}
