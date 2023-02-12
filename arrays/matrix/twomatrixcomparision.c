#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the rows of matrix : ");
    scanf("%d", &r);

    printf("\nEnter the column of matrrix :");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c];
    int i, j, l, k, m, m2 = 0;
    int rep[r * c], count = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter the elements of  matrix position %d%d :  ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter the elements 2nd matrix of position %d%d :  ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (l = 0; l < r; l++)
    {
        for (k = 0; k < c; k++)
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (mat1[l][k] == mat2[i][j])
                    {
                        rep[count] = mat2[i][j];
                        count++;

                        if (count > 1)
                        {
                            for (m = 0; m < count - 1; m++)
                            {
                                if (rep[count - 1] != rep[m])
                                {
                                    m2 = 1;
                                }
                                else
                                    m2 = 0;
                            }
                            if (m2)
                            {
                                printf("The repeting values are : %d \n", rep[count - 1]);
                            }
                        }
                        else
                        {
                            printf("The repeting value is : %d \n", rep[0]);
                        }
                    }
                }
            }
        }
    }

    if (count == 0)
    {
        printf("No common element are there are there ");
    }

    return 0;
}
