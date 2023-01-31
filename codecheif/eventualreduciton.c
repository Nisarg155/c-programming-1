
#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count, odd = 0;
        scanf("%d", &n);
        char s[n];
        int b[n];
        scanf("%s", s);
        for (int i = 0; i < n; i++)
            b[i] = -1;
        for (int i = 0; i < n; i++)
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                
                if (s[i] == s[j])
                {
                    count++;
                    b[j] = 0;
                }
            }
            if (b[i] != 0)
            {
                b[i] = count;
                if (count % 2 != 0)
                    {
                        odd++;
                        break;
                    }
            }
        }
        if (odd)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
