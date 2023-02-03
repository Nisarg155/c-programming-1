#include<stdio.h>
#include<math.h>

int main() 
{
    int rem ,num,digits = 0,temp,sum = 0;
    scanf("%d",&num);
    temp = num;
    while (temp)
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp)
    {
        rem  = temp%10;
        
        sum += pow(rem,digits);
        temp /= 10;
    }
    if (sum == num)
    {
        printf("YES\n");
    }
    else
    printf("NO\n");
    
    

    
    


    return 0;
}