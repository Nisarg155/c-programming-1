
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[101],n;
    printf("enter the string ");
    gets(s);
    n =strlen(s);
    char b[n+1];
for (int i = 0; i < n+1; i++)
{
    if(i<n)
    b[i] = s[n-1-i];
    else
    b[i] = '\0';
}

printf("%s ",b);

    
    
    return 0;
}
