#include<stdio.h>
#include<string.h>

int main() 
{
    int count = 0;
    char str[50],chr[10];
    scanf("%s%*c%s",chr,str);

    char *p = str;

    for (int i = 0; 1 ; i++)
    {
        if(strstr(p,chr) != NULL)
        {
            p = strstr(p,chr);
            p++;
            count++;
        }
        else
        break;
    }
    printf("%d\n",count);
    

    

    return 0;
}