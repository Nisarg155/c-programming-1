#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() 
{
    char s1[10],s2[10],s3[10];
    fgets(s1,10,stdin);
    int l = 0,m = 0;
    for (int i = 0; i < 10; i++)
    {
        if (isalpha(s1[i]))
        {
            s2[l++] = s1[i];
        }
        else
        s3[m++] = s1[i];
    }
    printf("%s%s\n%s",s1,s2,s3);
    
    return 0;
}