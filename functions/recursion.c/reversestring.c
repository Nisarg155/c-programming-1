#include<stdio.h>
void rev(char str[] , int n)
{
    if(n<=0)
    return;

    printf("%c",str[n-1]);
    rev(str,n-1);
}


int main() 
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);

    rev(str,n);
    return 0;
}