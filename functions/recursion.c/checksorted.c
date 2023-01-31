#include<stdio.h>
int check( int arr[],int n)
{
    if(n == 1)
    return 1;

    if(arr[0]>arr[1])
    return 0;
    check(arr+1,n-1);
    
}


int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n ;i++)
    scanf("%d",&arr[i]);
    printf("%d",check(arr,n));
    return 0;
}