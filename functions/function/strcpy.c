#include<stdio.h>
#include<string.h>
void copy( char str[],int n)
{
    char str2[50];
    for (int i = 0; i < n; i++)
    {
        str2[i] = str[i];
    }
    printf("\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%c",str2[i]);
    }
    
    
}

int main() 
{
    char str[50];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    int n = strlen(str);

    copy(str,n);
    return 0;
}