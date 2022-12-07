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

        for (int  i = 0; i < r1; i++)
        {
            for (int  j = 0; j < c1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
            
        }
            for (int  i = 0; i < r2; i++)
    {
        for (int  j = 0; j < c2; j++)
        {
            scanf("%d",&m2[i][j]);
        }

    }
    int sum = 0;
    printf("%d\t%d",r1,c2);
    for (int i = 0; i < r1; i++)
    {
        for (int  j = 0; j < c1; j++)
        {
            for (int  k = 0; k < r2; k++)
            {
                sum += m1[i][k] *m2[k][j];
            }
            printf("%d\t",sum );
            sum = 0;
            
            
        }
        printf("\n");
        
    }
    
        
    } 
    
    
    
}