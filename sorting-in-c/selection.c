#include <stdio.h>
void print(int a[], int n) // for printing the array
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void sort(int a[], int n) // for sorting the array
{
    int i, j, ind, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    print(a, n);
}

int main()
{
    int n;
    printf("Enter the length of array : "); // length of array
    scanf("%d", &n);

    int a[n]; // variable length initialization of array
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);
    return 0;
}