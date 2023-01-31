 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<ctype.h>
 int main(){
 char str[7][40];
    int i = 0,j,k,l,m,o,count = 0,len,space = 0,b[6],ind,len1,x;
    while(gets(str[i])!=0)
    {
        i++;
    }
    for ( i = 0; str[i] != '\0'; i++)
    {
        printf("\n");
        len = strlen(str[i]);
            space = 0;

            for ( j = 0; j < len; j++)
            {     
                b[0] = 0;
                if(str[i][j] == 32)
                {
                    printf("%c",str[i][j-1]);
                    for (int l = b[space]; l < j-1; l++)
                    {
                        printf("%c",str[i][l]);
                    }
                    printf("ly ");  
                    space++;
                    b[space] = j;
                }  
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
            else if (str[i][len -1] == '.')
            {
                x = b[space] +1;
                printf("%c",str[i][len-2]);
                for (int m = x; m < len -2; m++)
                {
                    printf("%c",str[i][m]);
                }
                printf("ly");
                
            }

            else 
            {
                x = b[space] +1;
                printf("%c",str[i][len-1]);
                for (int  l = x; l < len-1; l++)
                {
                    printf("%c",str[i][l]);
                }
                printf("ly");
                
            }

    }
 }