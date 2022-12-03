#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("Enter the name number of names to search : ");
    int n;
    scanf("%d ", &n);
    char search_name[n][30];
    for (int i = 0; i < n; i++)
    {
        gets(search_name[i]);
    }

    int n2, ind;
    printf("Enter the number of student in list :");
    scanf("%d ", &n2);

    char stu_list[n2][30];

    for (int i = 0; i < n2; i++)
    {
        gets(stu_list[i]);
    }
    int len,flag = 0;
    for (int i = 0; i < n; i++)
    {
        
        flag = 0;
        for (int j = 0; j < n2; j++)
        {
            for (int l = 0;l<strlen(stu_list[j]); l++)
            {
                if (stu_list[j][l] == 44)
                {
                    len = l-1;
                    break;
                }
                
            }
            
            if (strncmp(search_name[i], stu_list[j], len) == 0)
            {
                flag = 1;
                for (int k = len + 2; k < strlen(stu_list[j]); k++)
                {
                    if (stu_list[j][k] == '\0')
                    {
                        break;
                    }
                    else if (stu_list[j][k] != 32)                    
                    {
                        printf("%c",stu_list[j][k]);
                    }
                    
                }
                
            }
    
        }
        
        if(! flag )
        printf("\nNOT FOUND");
    }
}