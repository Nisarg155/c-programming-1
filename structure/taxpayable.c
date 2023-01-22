//Write a program to compute tax payable by a person as per following chart. Consider employ
//name, salary and tax as payable as objects of a structure. 
//Upto 100000 nil
//1,00001 to 150000 10% of amount that exceeds 100000
//1,50001 to 300000 20% of amount that exceeds 150000
//>300000 30 % of amount that exceeds 300000

#include<stdio.h>
typedef struct 
{
    char name[20];
    int income;
    float tax;
} employee_info;

int main() 
{
    int n;
    scanf("%d",&n);
    employee_info e[n];
    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%*c%[^\n]s",e[i].name);
        scanf("%d",&e[i].income);
        if (e[i].income <= 100000)
        {
            e[i].tax = 0;
        }
        else if(e[i].income > 100000 && e[i].income <=150000)
        {
            e[i].tax = .1*e[i].income;
        }
        else if ( e[i].income > 150000 && e[i].income <= 300000)
        {
            e[i].tax = .2*e[i].income;
        }
        else
        {
            e[i].tax = .3*e[i].income;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n%.4f\n",e[i].name,e[i].tax);
    }
    return 0;
}