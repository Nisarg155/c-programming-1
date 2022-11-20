
#include<stdio.h>

int main()
{
    int r,c ;
    printf("Enter the number  of rows : ");
   scanf("%d",&r);
   printf("\nEnter the number of columns : ");
   scanf("%d",&c);

int mat1[r][c],mat2[r][c];
int i,j,l,k,m,m2 = 0;
int rep[r*c] ,count=0;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("\nEnter the elements of  matrix position %d%d :  ",i,j);
       scanf("%d",&mat1[i][j]);
    }     
 

}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
       printf("\nEnter the elements 2nd matrix of position %d%d :  ",i,j);
       scanf("%d",&mat2[i][j]);
    }     
 

}

for(l=0;l<r;l++)
{
    for ( k = 0; k < c; k++)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(mat1[l][k] == mat2[i][j])
                {
                    rep[count] = mat2[i][j];
                    count++;           
                   
                }
               
            }
        }
    }

    
}

for ( i = 0; i < count; i++)
{
    for ( j = 0; j < count; j++)
    {
        /* code */
    }
    
}

return 0;
}
