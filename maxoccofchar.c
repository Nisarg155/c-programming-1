#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[50];
    scanf("%[^\n]s",a);
    int n = strlen(a);
    int  b[50] = {};
    for (int i = 0; i < n  ; i++)
    {
        printf("%d  ",b[i]);
    }
    
}