#include<stdio.h>


int main() 
{
    int n;
    scanf("%d",&n);
    int fact = 1;

    if(n == 0)
    printf("1\n");
    else
    {
        for(int i  = 1;i<n ;i++)
        {
            fact = fact*i;
        }
        printf("%d\n",fact);
    }

    return 0;
}