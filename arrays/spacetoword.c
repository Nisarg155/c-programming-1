#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[101];
    int n;
    printf("enter the string : ");
    gets(a);
    n= strlen(a);
    for(int i = 0; i<n+1 ; i++)
    {
        if(a[i] == 32)
        printf("\n");
        else
        printf("%c",a[i]);
    }
}