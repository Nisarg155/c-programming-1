#include<stdio.h>
int max_num(int arr[],int max ,int len)
{
    if (len == 0)
    {
        return max;
    }

    if ((*arr)>max)
    {
        max = (*arr);
    }
    max_num(arr + 1 , max ,--len);
    
    
}

int main() 
{
    int len;
    printf("Enter the length of array : ");
    scanf("%d",&len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter the ele no %d of arr : ",i + 1);
        scanf("%d",&arr[i]);
    }
    printf("The maximum number is :- %d\n",max_num(arr,0,len));
    
    return 0;
}