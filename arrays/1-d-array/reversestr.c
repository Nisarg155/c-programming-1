// todo reverse a string without using any anothe char array 

#include<stdio.h>


int main() 
{
    int n;
    scanf("%d",&n);
    char str[n],temp;
    scanf("%s",str);
    for (int i = 0; i <(n/2);i++)
    {
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-i-1] = temp;
    }
    printf("%s\n",str);
    return 0;
}