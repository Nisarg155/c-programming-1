#include<stdio.h>
#include<math.h>
void print(int base,int n)
{
    if (base == 0)
    {
        return ;
    }

    print(base-1,n);
    printf("%.0f\n",pow(n,base));
    
}

int main() 
{
    int base,number;
    scanf("%d%d",&base,&number);
    print(base,number);
    return 0;
}