#include<stdio.h>


int main() 
{
    int n;
    printf("Enter order of matrix : ");
    scanf("%d",&n);
    int matrix[n][n];
    int (*p)[n] = matrix;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("Enter ele of %d row and %d col :",i+1,j+1);
            scanf("%d",&p[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>j)
            {
                printf("%d ",p[i][j]);
            }
            else
            printf(" ");
        }
        printf("\n");
        
    }
    

    
    return 0;
}