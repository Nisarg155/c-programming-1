#include<stdio.h>
int cansplit(void)
{
    int n,sum1 = 0 ,sum2 = 0,flag = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n ;i++){
    scanf("%d",&arr[i]);
    sum1 += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
        sum1 -= arr[i];
        if (sum1 == sum2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    return 1;
    else
    return 0;
    
    

}

int main() 
{
    printf("%d",cansplit());
    return 0;
}