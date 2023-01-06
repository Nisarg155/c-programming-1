#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rotate_array(char str[], int number_of_chars_to_rotate)
{
    int n = number_of_chars_to_rotate, len = strlen(str);
    // Write code here to rotate characters in the array by number_of_chars_to_rotate
    // Use array traversing method
    // Do not use array indexation method or pointer offset method.
        char *p = NULL;
    int odd = 0 , even = 0 ;
    char eve[20] , od[20];
    for (int i = 0; i < n; i++)
    {
        if(i%2)
        eve[even++] = str[i];
        else
        od[odd++] = str[i];
    }
    

    sort(eve,str,even);
    p = &str[len-n];
    for(int i = 0;i<n;i++,p++)
    {
        printf("%c",*p);
    }
    p = &str[0];
    for(int i = 0;i<len-n;i++,p++)
    {
        printf("%c",*p);
    }
        
    
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    char str[100];
    scanf("%[^\n]s",str);
    scanf("%d",&n);
    rotate_array(str,n);
    
    return 0;
}