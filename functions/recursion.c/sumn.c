#include<stdio.h>

void p(int sum , int n)
{
    if (n<1)
    {
        printf("%d",sum);
        return;
    }
    p(sum+n,n-1);
    
}

int main() 
{
    int n;
    scanf("%d",&n);
    p(0,n);

    return 0;
}
// this is a code for reverse fibbo