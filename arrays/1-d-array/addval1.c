#include<stdio.h>


int main() 
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int a[n], b[n+1];
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the %d element of array : ",i+1);
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    int num;
    printf("enter the value to enter : ");
    scanf("%d",&num);
    b[n] = num;
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}