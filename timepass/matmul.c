#include<stdio.h>


int main() 
{
    int r1,c1,r2,c2;
    int sum = 0;
    printf("Enter the row of first mat : ");
    scanf("%d",&r1);
    
    if(c1 != r2)
    printf("muntiplication not possible");
    else
    {
        int i ,j;
        int a[r1][c1],b[r2][c2],c[r1][c2];
        for ( i = 0; i < r1; i++)
        {
            for (int j = 0; j <c1; j++)
            {
                printf("Enter the element of index %d %d : ",i,j);
                scanf("%d",&a[i][j]);
            }   
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter the element of index %d %d : ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            
            for (int j = 0; j < c2; j++)
            {    sum = 0;
                for (int k = 0; k < c1 ; k++)
                {
                    sum += a[i][k]*b[k][j];    
                }
                c[i][j] = sum;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t",c[i][j]);
            }
            
        }
        
        
        

    }
    return 0;
}