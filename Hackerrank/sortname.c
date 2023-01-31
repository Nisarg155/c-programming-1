#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char name[n][1000], sort[n][1000];
    for (int i = 0; i < n; i++)
    {
        gets(name[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int b;
            b = strcmp(name[i], name[j]);
            if (b == -32 || b >= 1)
            {
                strcpy(sort[i], name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], sort[i]);
            }
        }
    }
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
        
    }
    return 0;
    
}