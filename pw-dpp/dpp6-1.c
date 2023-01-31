#include <stdio.h>
int func(int a)
{
    static int i = 11;
    if (a < 5)
        return i--;
    if (a >= 5)
    {
        i = i + a;
        return printf("%d\n",func(a - 1) + i);
    }
}
int main()
{
    printf("%d", func(9));
    return 0;
}
