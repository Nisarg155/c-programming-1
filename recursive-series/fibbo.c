#include<stdio.h>
int fibbo(int a,int b,int num)
{
    if (num == 1)
    return b;
    printf("%d\t",b);
    fibbo(b,a+b,--num);
    

}

int main() 
{
    int num;
    scanf("%d",&num);
    int a = 0,b = 1;
    printf("%d\n",fibbo(a,b,num));
    return 0;
}