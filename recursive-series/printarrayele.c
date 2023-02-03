#include<stdio.h>
void print_arr(int arr[],int n)
{
    static int i = 0;
    if(n ==i  )
    return;
    i++;
    printf("Element is no %d is %d \n",i,*arr);
    print_arr(arr + 1, n);

}

int main() 
{
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    print_arr(arr,n);
    
    return 0;
}