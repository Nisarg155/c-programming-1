#include <stdio.h>

int main()
{
    int r, c;
    printf("enter the rows : ");
    scanf("%d", &r);
    printf("enter the columns : ");
    scanf("%d", &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nenter the element a %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf(" The transpose is :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
}