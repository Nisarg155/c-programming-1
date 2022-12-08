#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int n;
    
    scanf("%d ",&n);
    char name[n][30],temp[1][30];
    for (int i = 0; i < n; i++)
    {
        gets(name[i]);
    }
    
for (int i = 1; i < n; i++)
{
    for (int  j = i+1; j < n; j++)
    {
        if (name[])
        {
            strcpy(temp[0],name[j]);
            strcpy(name[j],name[i]);
            strcpy(name[i],temp[0]);
        }
    }
}
    for (int  i = 0; i < n; i++)
    {
        printf("%s\n",name[i]);
    }
}