#include<stdio.h>
#include<stdlib.h>

int main()
{
    int  n ;
   scanf("%d",&n);
    int i,j,x,y,sum_r,sum_c,sum_d = '0';

   int a[n][n] ;
   for(i=0 ;i<n;i++){
    for(j=0;j<n;j++)
    {
        a[i][j] = '9';
    }
   }

   

   for(i=0;i<n*n;i++)
   {

    if(!(i%2)  )  // player 1 i is even
    {
        printf("Enter input of pl1\n");
        scanf("%d%d",&x,&y);
        if(a[x][y] == '9')
        a[x][y] = '1';

    }
    else{
        printf("Enter the input of pl2\n");
        scanf("%d%d",&x,&y);

        if(a[x][y]=='9')
        {
            a[x][y] = '0' ;

        }
    }

    if(i>=2)
    {
        
        for(int r = 0;r<n;r++)
        {
            sum_r = '0' ;
            sum_c = '0';
            sum_d = '0' ;
             
             
                 for(int c = 0;c<n;c++)
            {
                sum_r += a[r][c];
                sum_c += a[c][r];
                if(r==c)
                {
                    sum_d += a[r][c];
                    printf("        %d      ",sum_d );

                }


            }

            if(sum_r == 192 || sum_c == 192||sum_r==195||sum_c==195||sum_d == 195 || sum_d==192)
            {
                if(sum_r == 192 || sum_c == 192 || sum_d == 192)
                {
                    printf("player 2 wins");
                    exit(0);
                }
                else if(sum_c == 195 || sum_r == 195 || sum_d == 195)
                {
                    printf("player 1 wins ");
                    exit(0);
                }
                else{
                    printf("draw");
                }
            }

            

        }

    }



   }
   
   

}