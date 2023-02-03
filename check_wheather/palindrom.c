#include<stdio.h>


int main() 
{
    int num,reverse = 0 ,q ;
    scanf("%d",&num);
    q = num;
    while (q)
    {
        reverse = reverse*10 + q%10;
        q = q/10; 
    }
    if (num == reverse)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    

    return 0;
}