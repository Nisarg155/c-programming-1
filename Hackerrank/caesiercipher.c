#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t ,n;
    scanf("%d%d",&t,&n);
    while (t--)
    {
        char a[50] ;
        scanf("%s",a);
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] >= 48 && a[i]<=57)
            {
                if (a[i] + n >57)
            printf("%c",47 + (a[i] + n%10 - 57));
                else
                printf("%c",a[i] + n);
                
            }
            else if (a[i]>= 97 && a[i]<= 122)
            {
                if(a[i] + n >122)
            printf("%c",96 + (a[i] + n -122));
                else
                printf("%c",a[i] + n);
            }
            else if (a[i] >=65 && a[i]<=90)
            {
                if (a[i] + n > 90)
            printf("%c",64 + (a[i] + n - 90));
                else
                printf("%c",a[i]+n );
            }
        }
        printf("\n");
        
        


    }
    
}