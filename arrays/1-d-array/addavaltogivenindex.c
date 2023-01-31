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
    int n1, ind;

    for (int i = 0; i < n; i++)
    {
        printf("\n element %d is %d ", i + 1, a[i]);
    }

    printf("\nentre the value you want to enter : ");
    scanf("%d", &n1);
    printf("enter the position number : ");
    scanf("%d", &ind);

    int b[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        if (i < ind - 1)
        {
            b[i] = a[i];
        }
        else if (i == ind - 1)
        {
            b[i] = n1;
        }
        else
        {
            b[i] = a[i - 1];
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        printf("\n element %d is %d ", i + 1, b[i]);
    }
}