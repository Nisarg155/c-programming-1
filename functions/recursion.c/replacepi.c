#include<stdio.h>
void pi(char str[],int i , int n)
{
    if(i == n-1)
    return;
    
    if(str[i] == 'p' && str[i+1] == 'i')
    printf("%d",3.14);
}

int main() 
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    pi(str,0,n);
    return 0;
}

