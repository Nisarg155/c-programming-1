#include <stdio.h>

int main()
{
    int i, j, num, x, y, count = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
            x = (i - 1)/2;

        for (j = 2; j <= x; j++)
        {

            if (i % j == 0)
            {
                count = 1;
                break;
            }
            else
                count = 0;
        }
        if ((count == 0 || i == 2 || i == 3 || i == 5) && i != 1)
            printf("%d\n", i);
    }
}
