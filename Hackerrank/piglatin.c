#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main() 
{
    char str[3][40];
    int i,j,k,l,m,count = 0,len,space = 0,b[6],ind,len1;
    for (int i = 0; i < 3; i++)
    {
        gets(str[i]);
    }
    for ( i = 0; i<3; i++)
    {
        len = strlen(str[i]);
        if(str[i][len] != '.' )
        {
            space = 0;
            for ( j = 0; j < len; j++)
            {
                b[0] = 0;
                if(str[i][j] == 32)
                {
                    space++;
                    b[space] = j;
                }
                if(j == len-1 )
                b[space] = len;
            }
            if(space == 0)
            {
                printf("%c",str[i][len-1]);
                for ( k = 0; k < len-1; k++)
                {
                    printf("%c",str[i][k]);
                }
                printf("ly");
            }
            else
            {
                for ( l = 0; l < space+1; l++)
                {
                    printf("%c",str[i][b[l+1] - 1]);
                    for ( m = b[l]; m <b[l+1] -1 ; m++)
                    {
                        printf("%c",str[i][m]);
                    }
                    printf("ly ");
                }
            }

            
        }


    }
    
    
    
    
    
    
    return 0;
}