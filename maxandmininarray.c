#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);

    int a[n];
    int temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    if (a[0] != a[n - 1])
    {
        printf("The max val is %d\n", a[0]);
        printf("The min val is %d\n", a[n - 1]);
    }
    else
    {
        printf("There is no max or min  val :");
    }
}