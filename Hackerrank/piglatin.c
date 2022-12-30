#include<stdio.h>


int main() 
{
    char str[5][40],n = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%[^\n]s",str[i]);
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s",str[i]);
    }
    
    
    return 0;
}