#include<stdio.h>
int find(int a[],int n,int num,int i)
{
    if(i == n)
    return -1;

    if(a[i] == num )
    return i;

    return find(a,n,num,i+1);
}

int main() 
{
    int n,num;
    scanf("%d",&n);
    int a[n];

    for(int i = 0;i<n ;i++ )
    scanf("%d",&a[i]);
    printf("Enter the number to search : ");
    scanf("%d",&num);
    printf("%d",find(a,n,num,1));
    return 0;
}