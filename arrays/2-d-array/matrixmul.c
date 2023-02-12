#include<stdio.h>
void mat_mul(int r1,int r2,int c1,int c2,int m1[][c1],int m2[][c2])
{
    if (c1 != r2)
    {
        printf("Multiplication not possible \n");
    }
    else{
        int mat[r1][c2];

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j <c2; j++)
            {
                mat[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    mat[i][j] += m1[i][k]*m2[k][j];
                }
                
            }
            
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t",mat[i][j]);
            }
            printf("\n");
        }
        
        
    }   
}

int main() 
{
    int rows1,cols1,rows2,cols2;
    printf("Enter rows and columns of matrix 1 :- ");
    scanf("%d%d",&rows1,&cols1);
    printf("Enter rows and columns of matrix 2 :- ");
    scanf("%d%d",&rows2,&cols2);
    int m1[rows1][cols1] ,m2[rows2][cols2];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }

    mat_mul(rows1,rows2,cols1,cols2,m1,m2);
    
    return 0;
}