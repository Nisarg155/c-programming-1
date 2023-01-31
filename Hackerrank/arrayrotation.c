#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void rotation(char str[],char str_i[],int len,int rot)
{
       int n = rot*2,count = 0;
    
        char *p = NULL;
    if(n> len){
        n = n%len;
    }
    p = &str[len-n];
    for(int i = 0;i<n;i++,p++)
    {
        str_i[count++] = *p;
    }
           p = &str[0];
    for(int i = 0;i<len-n;i++,p++)
    {
        str_i[count++] = *p;
    }
}
void rotate_array(char str[], int even_index_rotations, int odd_index_rotations)
{
    // Write code here to rotate characters at even index by even_index_rotations
    // and characters at odd index by odd_index_rotations in the array.
    // Consider index starting from 0, i.e. first character in the array is at 0 index.
    // Use array traversing method.
    // Do not use array indexation method or pointer offset method.
    // Look at example for more clarity
    int len = strlen(str);
    char odd_str[len] , even_str[len];
    rotation(str,even_str,len,even_index_rotations);
    rotation(str,odd_str,len,odd_index_rotations);
    for (int i = 0; i < len; i++)
    {
        if (!(i%2))
        {
            printf("%c",even_str[i]);
        }
        else
        {
            printf("%c",odd_str[i]);
        }
        
        
    }
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[50];
    scanf("%[^\n]s",str);
    int odd,even;
    scanf("%d%d",&even,&odd);
    rotate_array(str,even,odd);
    return 0;
}