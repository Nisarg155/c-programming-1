#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char a[50];
    scanf("%[^\n]s",a);
    int n = strlen(a);
    int  b[n] ,count = 1,ind,max = 0;
    for (int i = 0; i < n; i++)
    {
        b[i] = -1;
    }
    
    for (int i = 0; i < n  ; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j])
            {
                b[j] = 0;
                count++;
            }
            
        }
        if (b[i])
        {
            b[i] = count;
            if (max <b[i])
            {
                max = b[i];
                ind = i;
            }   
        }   
    }
        printf("%c",a[ind]);
    
    
    
}