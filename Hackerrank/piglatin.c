#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main() 
{
    char str[3][40], b[15];
    int i ,space ,k ;
    for (int i = 0; i < 2; i++)
    {
        gets(str[i]);
    }
   
    int ind ;
    for ( i = 0; i < 2; i++)
    {
        ind = strlen(str[i]);
        space = 0; k = 0;
        if(str[i][ind-1] != '.');
        {
            for (int j = 0; j < ind; j++)
            {
                if(str[i][j] == 32){
                space++;
                b[k] = j;
                k++;
                }
            }
            if(space==0)
            {
                b[k] = ind;
                for (int l = 0; l < k; l++)
                {
                    int n = b[l];
                    printf("%c",str[i][n-1]);
                    for (int m = 0; m < b[l]-1; m++)
                    {   
                        printf("%c",str[i][m]);
                    }
                    printf("ly");
                    
                }
                
            }
            
        }
    }
    
    
    
    
    return 0;
}