#include<stdio.h>
int sum(int num)
{
    if(num == 0)
    return 0;

    return num + sum(num-1);
}


int main() 
{
    int num;
    scanf("%d",&num);
    printf("%d\n",sum(num));
    return 0;
}