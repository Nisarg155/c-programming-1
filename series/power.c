// todo write a c to ealuate 1^2 +1^2 + 2  + 2^2  +1^2 + 2^2 ...
#include<stdio.h>
#include<math.h>

int main() 
{
    int n ,sum = 0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += pow(j,2);
        }    
    }
    printf("%d\n",sum);
    
    return 0;
}