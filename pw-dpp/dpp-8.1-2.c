#include <stdio.h>
int main()
{
    int a[6] = {0, 1, 2, 3, 4, 5};
    int *p[6] = {a + 2, a + 1, a, a + 3, a + 4, a + 5};
    int **ptr = p;
    **ptr++;
    *++*ptr;
    ++**ptr;
    printf("%d %d %d", *ptr - a, ptr - p, **ptr);
    return 0;
}
