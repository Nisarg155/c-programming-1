#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// todo print the prime number betweent 2 to entered number 
// ! Sieve of Eratosthenes
void check_prime(int num)
{
    bool prime[num + 1];
    memset(prime,true,sizeof(prime));

    for (int p = 2  ; p*p <= num; p++)  
    {
        if (prime[p] == true)
        {
            for (int i = p*p; i <= num; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int i = 2; i <= num; i++)
    {
        if (prime[i])
        {
            printf("%d\t",i);
        }
        
    }
    
}

int main() 
{
    int num;
    scanf("%d",&num);
    check_prime(num);
    return 0;
}