#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10],str2[20];
    printf("enter first string : ");
    scanf("%s",str1);
    printf("enter second string : ");
    scanf("%s",str2);
    if(strlen(str1)>strlen(str2))
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str1[i]!=str2[i])
            {
                printf("%d",str1[i]-str2[i]);
                break;
            }
            
        }
        printf(" the strings are same ");
    }
    else 
    {
        for (int i = 0; i < strlen(str2); i++)
        {
            if (str1[i]!=str2[i])
            {
                printf("%d",str1[i]-str2[i]);
                break;
            }
            printf("The strings are equal ");
            
        }
        
    }
    
}