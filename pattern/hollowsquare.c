#include<stdio.h>


int main() 
{
    int rows;
    int star = '*';
    scanf("%d",&rows);
    for(int i = 0;i<rows;i++)
    { 
        for (int j = 0; j < rows; j++)
        {
            if(j == 0 || j == rows - 1 || i == 0 || i == rows-1)
            printf("%2c",star);
            else
            printf("  ");
        }
        printf("\n");
        
    }
    return 0;
}