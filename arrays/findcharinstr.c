#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() 
{
    char ch,str[50];
    printf("Enter the char to find :");
    scanf("%c%*c",&ch);
    printf("Enter the string :");
    gets(str);
    int n = strlen(str);
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(str[i] == ch)
        {
            count++;
            str[i]  = '0';
        }
    }
    printf("the count is :%d",count);
    printf("\nthe string is : ");
    for(int i = 0;i<n ;i++)
    {
        if(str[i] != '0')
        printf("%c",str[i]);
    }
    
    return 0;
}