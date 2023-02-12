#include<stdio.h>


int main() 
{
    int n1,n2,i=0,j=0,k=0;
    scanf("%d%d",&n1,&n2);
    int arr1[n1+1],arr2[n2+1],arr3[n1+n2],n3 = n1+n2;
    arr1[n1] = 9999;
    arr2[n2] = 9999;
    for (int i = 0; i < n1; i++)
    {
        printf("ele %d ",i+1);
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("ele %d ",i+1);
        scanf("%d",&arr2[i]);
    }
    while((j!= n2) && ((i!= n1) || (k!= n3)))
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    for (int i = 0; i < n3; i++)
    {
        printf("%d\t",arr3[i]);
    }
    return 0;
}