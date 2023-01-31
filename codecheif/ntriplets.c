#include <stdio.h>

int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    int n, a[3];
    while (t--)
    {
        scanf("%d", &n);
        int flag = 0;
        for (int i = 2; i < n && flag <= 3; i++)
        {
            if (n % i == 0 && flag <3)
            {
                a[flag++] = i;
                if (flag == 2 )
                {
                    if (n % (a[flag - 1]*a[flag - 2]) != 0  )
                        flag--;
                }
            }
        }
        if (flag == 3)
            printf("%d %d %d\n", a[0], a[1], a[2]);
        else
            printf("-1\n");
    }
    return 0;
}
