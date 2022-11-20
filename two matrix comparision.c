
#include<stdio.h>

int main()
{
    int n ;
    printf("Enter the order of matrix : ");
   scanf("%d",&n);
int mat1[n][n],mat2[n][n];
int i,j,l,k,m,m2 = 0;
int rep[n*n] ,count=0;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       printf("\nEnter the elements of  matrix position %d%d :  ",i,j);
       scanf("%d",&mat1[i][j]);
    }     
 

}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       printf("\nEnter the elements 2nd matrix of position %d%d :  ",i,j);
       scanf("%d",&mat2[i][j]);
    }     
 

}

for(l=0;l<n;l++)
{
    for ( k = 0; k < n; k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat1[l][k] == mat2[i][j])
                {
                    rep[count] = mat2[i][j];
                    count++;
                 
                        if(count>1)
                    {
                        for ( m = 0; m < count-1; m++)
                        {
                            if(rep[count-1]!=rep[m])
                            {
                                m2 = 1;
                            }
                            else 
                            m2 = 0;
                            
                        }
                        if(m2 )
                        {
                            printf("The repeting values are : %d \n",rep[count-1]);
                        }
                        
                        
                    }
                   
                }
            }
        }
    }

    
}
return 0;
}
