#include<stdio.h>


int main() 
{
    int n;
    scanf("%d",&n);
    int a = 0 ,b = 1,c;
    while(n--)
    {
        c = a +b ;
        a = b;
        b = c;
    }
    printf("%d\n",b);

    return 0;
}