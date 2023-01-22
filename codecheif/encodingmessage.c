#include <stdio.h>

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    char temp;
    while (t--)
    {
        int len, diff;
        scanf("%d", &len);
        char str[len];
        scanf("%s", str);
        for (int i = 0; i < len; i++)
        {
            diff = 122 - str[i];
            if (diff >= 13)
            {
                str[i] = 122 - (25 - diff);
            }
            else
            {
                str[i] = 97 + diff;
            }
        }
        if (len%2)
        {
            len = len -1;
        }
        for (int i = 0; i <= len; i = i +2)
        {
            temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
        printf("%s\n",str);
        
        
        
    }
    
    return 0;
}
