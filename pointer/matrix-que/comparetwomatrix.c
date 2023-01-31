#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int rows,col;
    printf("Enter rows :- ");
    scanf("%d",&rows);
    printf("Enter columns :- ");
    scanf("%d",&col);
    int matrix1[rows][col],matrix2[rows][col];
    int (*p)[col] = matrix1,(*q)[col] = matrix2;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <col; j++)
        {   printf("Enter the ele of row %d col %d of 1st mat :- ",i+1,j+1);
            scanf("%d",&p[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <col; j++)
        {   printf("Enter the ele of row %d col %d of 2nd mat :- ",i+1,j+1);
            scanf("%d",&q[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (p[i][j] != q[i][j])
            {
                printf("Matrix are not equal ");
                exit(0);
            }
            
        }    
    }
    printf("Matrix are equal ");
    
    return 0;
}