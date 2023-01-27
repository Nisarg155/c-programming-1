#include<stdio.h>
#define principle 5000
#define period 10

int main()
{
    float amount,value;
    int years;
    years = 0;
    value = principle;
    while(years<period)
    {
        amount = value + value*.11;
        years += 1;
        value = amount;
        printf("the amount is %f \n",amount);


    }
    printf(" The final amiunt  is : %f",amount);
    return 0;
}