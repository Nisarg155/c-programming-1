#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[2][10];
    for (int i = 0; i < 2; i++)
    {
        gets(s);
    }

    printf("%s   %s",s[0],s[1]);
    
    
    
}