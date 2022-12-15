#include <stdio.h>
void prime(int a[],int n,int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (num == (a[i] + a[j]))
            {
                printf("%d = %d + %d\n",num,a[i],a[j]);
                count++;
            }
            
        }
        
    }
    if(count == 0)
    printf("0");
    
}

int main()
{
    int i, j, num, x, y, count = 0, n = 1, a[50] = {2};
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        if (i % 2 != 0)
            x = (i + 1) / 2 - 1;
        else
            continue;

        for (j = 2; j <= x; j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
            else
            {
                count = 0;
            }
        }
        if (count == 0 && i != 1)
        {
            a[n] = i;
            n++;
        }
    }
    prime(a,n,num);
}
