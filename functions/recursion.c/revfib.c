#include<stdio.h>

int   fib(int a ,int b ,int n)
{
    static int count = 0;
    if (count == n)
    {
        return;
    }
    else{
        count++;
        printf("%d  ",b);
        return fib(b,a+b,n);    
        
        
    }
    
    

}

int main()
{
    int n,a=0,b = 1;
    scanf("%d",&n);
    fib(a,b,n);
}