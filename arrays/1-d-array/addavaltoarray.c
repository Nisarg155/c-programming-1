#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int a[n], temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    int n1;

    for (int i = 0; i < n; i++)
    {
        printf("\n element %d is %d ", i + 1, a[i]);
    }

    printf("\nentre the value you want to enter : ");
    scanf("%d", &n1);

    int b[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        if (i == n)
        {
            b[n] = n1;
        }
        else
        {
            b[i] = a[i];
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("\n element %d is %d ", i + 1, b[i]);
    }
}