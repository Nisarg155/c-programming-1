#include<stdio.h>


int main() 
{
    int n;
    scanf("%d",&n);
    int ar1[n],max = 0,min = __INT_MAX__;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar1[i]);
        if (ar1[i]>max)
        {
            max = ar1[i];
        }
        if(ar1[i]<min)
        {
            min = ar1[i];
        } 
    }
    printf("%d %d",max ,min);
    return 0;
}