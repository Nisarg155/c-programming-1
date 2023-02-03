#include<stdio.h>
void reverse_str(char str[],int len)
{
    if(len == 0)
    return;

    reverse_str(str + 1,--len);
    printf("%c",*str);
}

int main() 
{
    int len ;
    scanf("%d",&len);
    char str[len];

    scanf("%s",str);
    reverse_str(str,len);
    printf("\n");
    return 0;
}