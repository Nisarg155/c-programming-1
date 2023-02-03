#include<stdio.h>
void dec_to_bin(int num)
{
    if(num == 0)
    return;

    int bin ;
    bin = num & 1;
    dec_to_bin(num>>1);
    printf("%d",bin);
}

int main() 
{
    int num;
    scanf("%d",&num);
    if(num)
    dec_to_bin(num);
    else
    printf("0");
    printf("\n");
    return 0;
}