#include<stdio.h>
int fibbo(int a,int b,int num)
{
    if (num == 1)
    {
        printf("%d\t",b);
        return 0;
    }

    fibbo(b,a+b,--num);
    printf("%d\t",b);
    

}

int main() 
{
    int num;
    scanf("%d",&num);
    int a = 0,b = 1;
    fibbo(a,b,num);
    return 0;
}