#include<stdio.h>
int gcd(int num1,int num2)
{
    if (num1%num2 == 0)
    {
        return num2;
    }

    gcd(num2,num1%num2);
    
}

int main() 
{
    int num1,num2;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    printf("%d\n",gcd(num1,num2));
    return 0;
}