#include<stdio.h>
#include<string.h>
void conc(char str1[] ,char str2[],int n)
{
    int i;
    for ( i = 0; i <n ; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("0");
            break;
        }
    }
    if (i == n)
    printf("1");
    
    
    
}

int main()
{
    char str1[20],str2[20];
    int n;
    printf("enter first string : ");
    scanf("%s",str1);
    printf("enter second string : ");
    scanf("%s",str2);
   if (strlen(str1)>strlen(str2))
    n = strlen(str1);
    else
    n = strlen(str2);
    conc(str1,str2,n);   
}