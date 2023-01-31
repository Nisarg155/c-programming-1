#include<stdio.h>
int find(int a[],int n,int num,int i)
{
    if(n == 0)
    return 0;

    

    find(a,n-1,num,i+1);
   if(a[i]== num)
    {
        printf("i = %d  \n",i);
        return i;
    }
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
    printf("%d",find(a,n,num,0));
    return 0;
}