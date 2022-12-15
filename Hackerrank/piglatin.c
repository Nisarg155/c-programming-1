#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main() 
{
    char str[3][40], b[15];
    int i ,count = 0;
    for (int i = 0; i < 3; i++)
    {
        gets(str[i]);
    }
   
    int ind = 0;
    for ( i = 0; i < 3; i++)
    {
        ind = 0;
    int  k = 0;
        for (int j = 0; j<strlen(str[i])+1; j++)
        {if (str[i][j] != 32 && str[i][j] != '.' && str[i][j] != '\0')
        ind++;
        else{
           b[k] = ind;
            k++;
        }
        }
    }
    
    
    
    
    return 0;
}