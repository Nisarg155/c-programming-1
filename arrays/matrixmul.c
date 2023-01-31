#include<stdio.h>

int main()
{
    int r1,c1,r2,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if (c1!=r2)
    {
        printf("MULTIPLICATION NOT POSSIBLE");
    }
    else{

        int m1[r1][c1],m2[r2][c2];
        int r[r1][c2];
        int i,j,k;

        for ( i = 0; i < r1; i++)
        {
            for (  j = 0; j < c1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
            
        }
            for ( i = 0; i < r2; i++)
    {
        for (  j = 0; j < c2; j++)
        {
            scanf("%d",&m2[i][j]);
        }

    }
    int sum = 0;
    printf("%d\t%d",r1,c2);
    for ( i = 0; i < r1; i++)
    {
        sum = 0;
        for (  j = 0; j < c1; j++)
        {
            sum += m1[i][j]*m2[j][i];
        }
        for ( k = 0; k < c2; k++)
        {
            r[i][k] = sum;
            
        }
    }

    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d\t",r[i][j]);
        }
        printf("\n");
        
    }
    
    } 
    
    
    
    
    
}