#include <stdio.h>

int print(int n)
{
    if (n == 50)
        return 1;
    else
        printf("%d\n", n++);

    return print(n);
}

int main()
{
    int n = 1;
    print(n);
}