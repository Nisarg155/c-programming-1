#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        
    int a,b,n,count_a=0,count_b =0 ;
    scanf("%d%d%d",&n,&a,&b);
    int face[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&face[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (face[i] == a)
        {
            count_a++;
        }
        if (face[i] == b)
        {
            count_b++;
        }
    }
    printf("%f\n",(count_a/(1.0*n))*(count_b/(1.0*n)));

    }
}