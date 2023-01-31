#include<stdio.h>


int main() 
{
    int rows,columns;
    scanf("%d%d",&rows,&columns);
    int arr[rows][columns];
    for(int i = 0;i<rows ;i++)
    {
        for(int j = 0 ;j<columns ;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int (*p)[][columns] = &arr;
    for(int i = 0;i<columns;i++)
    {
        for(int j = 0 ;j<rows ;j++)
        {
            printf("%d ",*(*(*p + j) + i));
        }
        printf("\n");

    }

    return 0;
}