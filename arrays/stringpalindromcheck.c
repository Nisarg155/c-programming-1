#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char arr[50];
    int i,j,count = 0;
    gets(arr);

    for ( i = 0; i < 50; i++)
    {
        if (isupper(arr[i]))
        {
            arr[i] += 32;
        }
        if (arr[i] == '\0')
            break;
        count++;
    }
    for ( i = 0; i < count; i++)
    {
        if (arr[i]!=arr[count-i-1])
        {
            printf("false");
            exit(0);
        }   
    }
    printf("true");
    
    
    
}