#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,sum =0,k;
    printf("Enter the dimensions of first matrix rows and columns \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the dimensions  of second matrix rows and columns\n");
    scanf("%d%d",&r2,&c2);

    if(c1==r2){
    int mat1[r1][c1];
    int mat2[r2][c2];
    for ( i = 0; i < r1; i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the element %d%d : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the element of %d%d :",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    int mat3[r1][c2];

 
for ( i = 0; i < r1; i++)
{
    for ( j = 0; j < c2; j++)
    {
         sum = 0;
        for ( k = 0; k < c2; k++)
        {
            sum += mat1[i][k]*mat2[k][j] ;
        }

        mat3[i][j] = sum;
        
    }
    
}


    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("the mult of pos  (%d%d) is :%d \n",i+1,j+1,mat3[i][j]);
        }
        
    }
    
    }
    
    else
    printf("The matrix multliplication is not possible");
}