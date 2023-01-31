#include<stdio.h>
int main()
{
  //Declaration of the variables. a-> first number. b->second number.
  long long int a,b,sum=0,i;
  //Taking values from user.
  printf("This program will tell you sum of all numbers between your given numbers.\n");
  printf("Enter your first number : ");
  scanf("%lli",&a);
  printf("Enter your second number : ");
  scanf("%lli",&b); 
  //For condition.
  
  if(a <b){
    
    for(i = a; i<b; i++)
      { 
        sum=sum+i;
      }
      sum =sum -a;
    }
  else{
    
    for(i = b; i < a; i++)
      { 
        sum=sum=i;
      }
      sum = sum - b;
    }
    printf("Result of your sum is %lli.",sum);
  
  
}
