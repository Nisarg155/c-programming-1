#include<stdio.h>
void min(int a[],int n , int max)
{ 
    int min = max;
    for (int i = 0; i < n; i++)
    if (a[i]<min)
    {
        min = a[i];
    }
    printf(" min is %d ",min);
    
    

}
void max(int a[],int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    if (a[i] > max)
    max = a[i];
    printf(" max is %d \n",max);

    min(a,n,max);
}


int main() 
{
    int n;
    printf("len :");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    max(a,n);
    return 0;
}