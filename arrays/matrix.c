#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int mat1[a][b];
    int mat2[c][d];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (c != b)
    {
        printf("MULTIPLICATION NOT POSSIBLE");
        exit(0);
    }
    int mul[a][d];
    printf("%d\t%d\n", a, d);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
       
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

 
return 0;
}