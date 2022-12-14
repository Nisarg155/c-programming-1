#include<stdio.h>
void fib(int a,int b,int n)
{
    static int i =0;
    if (i == n )
    return;

    else
    {
        
        i++;
        fib(b,b+a,n);
        printf("%d\t",b);
    }
    
}

int main() 
{
    int n , a = 0 , b = 1;
    scanf("%d",&n);
    fib(a,b,n);
    return 0;
}