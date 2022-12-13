#include<stdio.h>

void print(int a[],int n) // for priting sorted array
{
    for (int i = 0; i < n; i++)
    printf("%d\t",a[i]);
    
}
void bubble(int a[],int n)  // for sorting entered array
{
    int count = 1 ,temp  ;
    while (count < n )
    {
        for (int i = 0; i < n-count; i++)
        {
            if (a[i] > a[i +1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i +1] = temp;
            }
            
        }
        count++;
        
    }
    print(a,n);
    
}


int main() 
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int i , j ,a[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    bubble(a,n); // passing array to function
    
    return 0;
}