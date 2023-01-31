#include<stdio.h>


int main() 
{
    int n,index;
    scanf("%d",&n);
    int arr[n],b[n-1],*p = NULL,*q = NULL,count = 0;
    p = arr;
    q = b;
    for (int i = 0; i < n; i++,p++)
    {   printf("Enter %d ele of arr  : ",i+1);
        scanf("%d",p);
    }
    printf("Enter the number the ele num to del : ");
    scanf("%d",&index);
    p =arr;
    for (int i = 0; i < n; i++,p++)
    {
        if (i != index -1)
        {
            *q++ = *p;
        }
    }
    q = b;
    for (int i = 0; i < n-1; i++)
    {
        printf("The ele %d is :- %d\n",i+1,*q++);
    }
    
    


    
    return 0;
}