#include<stdio.h>
#include<string.h>

int main() 
{
    char a[10],temp ;
    scanf("%[^\n]s",a);
    int n = strlen(a);
    int count  = 0,space = 0;
    for(int i = 0;i< n ;i++)
    {
        if(a[i] == ' ')
        space++;
    } 
    printf("total spaces %d \n total char %d",space,n - space);
    return 0;
}