#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
int main()
{
    char a[50], b[50],mis = 0;
    int count_a = 0, count_b = 0;
    gets(a);

    gets(b);

    for (int i = 0; i < 50; i++)
    {
        if (a[i] == '\0')
            break;
        else
            count_a++;
    }
    for (int i = 0; i < 50; i++)
    {
        if (b[i] == '\0')
            break;
        else
            count_b++;
    }
    if (count_a == count_b)
    {
        for(int i = 0;i<count_a;i++)
        {
            if (a[i] != b[i])
            {
                mis = 1;
            }
            
        }
        if (mis == 0)
        {
            printf("same");
            exit(0);
        }
        
        
    }
    

    if (count_a >=count_b)
    {
        for (int i = 0; i <= count_b; i++)
        {
            if (i < count_b)
                a[count_a + i] = b[i];
            else
                a[count_a + i] = '\0';
        }
        printf("\n%s", a);
    }
    else
    {
        for (int i = 0; i <= count_a; i++)
        {
            if (i < count_a)
                b[count_b + i] = a[i];
            else
                b[count_b + i] = '\0';
        }
        printf("\n%s", b);
    }
}
