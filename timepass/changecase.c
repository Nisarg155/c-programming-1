#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main() 
{
    printf("str :");
    char s[50];
    scanf(" %[^\n]",s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
        s[i] += 32;
        else if(islower(s[i]))
        s[i] -= 32;
        
    }
    printf("%s",s);
    
    


    return 0;
}