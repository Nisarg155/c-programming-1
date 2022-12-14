#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],b[c][r];
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c ;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j< c;j++)
        {
            if(i != j && a[i][j] != a[j][i])
            {
                printf("non symmetric");
                exit(0);
            }
        }
    }

    return 0;
}