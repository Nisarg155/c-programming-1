#include<stdio.h>
#include<stdlib.h>
 // todo find if entered matrix is orthogonal or not

int main() 
{
    int rows,col;
    int sum = 0;
    printf("Enter row : ");
    scanf("%d",&rows);
    printf("Enter col : ");
    scanf("%d",&col);
    int matrix[rows][col],transpose[col][rows];
    int (*p)[col] = matrix,(*q)[rows] = transpose;

    for (int i = 0; i < rows; i++)             // ! to read the matrix
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter ele of row %d and col %d : ",i+1,j+1);
            scanf("%d",&p[i][j]);
        }
    }

    for (int i = 0; i < col; i++)   //! to transpose the matrix 
    {
        for (int j = 0; j < rows; j++)
        {
            q[i][j] = p[j][i];
        }
    }

    int orthogonal[rows][rows];
    int (*r)[rows] = orthogonal;     

    for (int i = 0; i < rows; i++)    // !check if matrix is orthogonal or not 
    {
        for (int j = 0; j < rows; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < rows; k++)
            {
                r[i][j] += p[i][k] * q[k][j];
            }
            if (i != j)
            {
                if (r[i][j] != 0)
                {
                    printf("Matrix is not orthogonal");
                    exit(0);
                }
            }
            else if(i == j)
            {
                if (r[i][j] != 1)
                {
                    printf("matrix is not orthogonal ");
                    exit(0);
                }
                
            }
            
            
        }
    }
    printf("Matrix is orthogonal \n");
    
    
    return 0;
}