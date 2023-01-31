#include <stdio.h>

int main()
{
    int n;
    printf("enter the n");
    scanf("%d", &n);

    int a[n], i, j, count = 0;
    int c[100] = {1};
    for (i = 0; i < n; i++)
    {
        printf("\nenter %d elemene :", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                c[j] = 0;

                count++;
            }
        }
        c[i] = count;
    }

    for (i = 0; i < n; i++)
    {
        if (c[i] != 0)
        {
            printf("The number is %d and its frequency is %d\n", a[i], c[i]);
        }
    }
}