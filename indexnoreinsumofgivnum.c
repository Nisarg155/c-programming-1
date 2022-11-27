#include <stdio.h>

int main()
{
    int n;
    printf("enter the length of array : ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array : ", i + 1);
        scanf("%d", &a[i]);
    }

    int num, count = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == num)
            {
                printf("The index number are %d %d", i, j);
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("no such pairs are there :");
    }
}