#include<stdio.h>

int main()
{
    int number;
    printf("enter the number : ");
    scanf("%d ",&number);
    if (number%2==0)
    {
        printf("The number is divisible by 2");
    }
    else{
        printf("The number is not divisible by 2");
    }


    return 0;
}
