#include<stdio.h>

int fib(int a ,int b ,int n)
{
    static int count = 0;
    if (count == n)
    {
        return 0;
    }
    
        count++;        
        fib(b,a+b,n);
        printf("%d ",b);
    
}
int main()
{
    int n,a=0,b = 1;
    scanf("%d",&n);
    fib(a,b,n);
}