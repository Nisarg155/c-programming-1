#include<stdio.h>
#include<stdlib.h>

void dis(int *p, int n)
{
    for (int i = 1; i <= n*n; i++)
    {
        printf("%c ",*p);
        p++;
        if(i%3==0)
        printf("\n");
    }
    
}

int main()
{
    int  n ;
   scanf("%d",&n);
    int i,j,x,y,sum_r,sum_c,sum_d = '0',sum_f= '0';
    int z  = 48*(n+1), y = 48 +n*49;

   int a[n][n] ;
   for(i=0 ;i<n;i++){
    for(j=0;j<n;j++)
    {
        a[i][j] = '*';
    }
   }
   dis(a,n);

   

   for(i=0;i<n*n;i++)
   {

    if(!(i%2)  )  // player 1 i is even
    {
        printf("Enter input of pl1\n");
        scanf("%d%d",&x,&y);
        if(a[x][y] == '*')
        {
              a[x][y] = '1';
        }
        else{
            printf("invalid input\n");
            i--;
        }
        

        if(x==y  )
        {

            sum_d += a[x][y];
        }
         if(x + y == n-1)
        {
            sum_f += a[x][y];
        }


    }
    else{
        printf("Enter the input of pl2\n");
        scanf("%d%d",&x,&y);

        if(a[x][y]=='*')
        {
            a[x][y] = '0' ;

        }
        else
        {
            printf("invalid input\n");
            i--;
        }

        if (x==y )
        {
            sum_d += a[x][y];
        }
         if(x + y == n -1)
        {
            sum_f += a[x][y];
        }
        
    }
    dis(a,n);

    if(i>=2)
    {
        
        for(int r = 0;r<n;r++)
        {
            sum_r = '0' ;
            sum_c = '0';
            
             
             
                 for(int c = 0;c<n;c++)
            {
                sum_r += a[r][c];
                sum_c += a[c][r];
              


            }

            if(sum_r == x|| sum_c == x||sum_r==y||sum_c==y||sum_d == y || sum_d==x)
            {
                if(sum_r == x || sum_c == x || sum_d == x || sum_f == x)
                {
                    printf("player 2 wins");
                    exit(0);
                }
                else if(sum_c == y || sum_r == y || sum_d == y || sum_f == y)
                {
                    printf("player 1 wins ");
                    exit(0);
                }
               
            }
          

            

        }

    }



   }

   if(i==9)
   {
    printf("draw");
   }
   
   

}