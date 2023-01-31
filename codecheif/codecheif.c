#include <stdio.h>
int main(void) 
{
	//COUNTRY PROBLEM:::--
	//sum of n natural numbers is denoted by=sum(N)
	//sum(D,N)= D means sum applies d times and N= to n numbers::--
	int t;
	scanf("%d",&t);
	int sum=0;
	int d,x;
	
	while(t--)
	{
	   int n;
	   scanf("%d %d",&d,&n);
	   
    while(d--)
    {
        sum=0;
       for(int i=1; i<=n; i++)
       {
           sum=sum+i;
       }
       n=sum; 
        
    }
	  
	    printf("%d\n",n);
	}
	
	return 0;
}

