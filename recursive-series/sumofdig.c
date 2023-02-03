#include<stdio.h>
int sum_digit(int num)
{
    static int sum = 0;
    if(num == 0)
    return sum;

    sum += num%10;
    sum_digit(num/10);
}

int main() 
{
    int num;
    scanf("%d",&num);
    printf("%d\n",sum_digit(num));
    return 0;
}