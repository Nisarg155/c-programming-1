#include <stdio.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}
void sort(int a[], int n)
{
    int count = 0, temp;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        count++;
    }
    print(a, n);
}

int main()
{
    int n, i;
    printf("len :");
    scanf("%d", &n);
    int a[n], b[n + 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    int num;
    sort(a, n);
    printf("Entre the number to insert : ");
    scanf("%d", &num);
    b[n] = num;
    sort(b, n + 1);

    return 0;
}