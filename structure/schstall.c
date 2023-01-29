#include<stdio.h>
typedef struct {
    char name[20];
    float revenue , expanse,net_income;
} stall_info;

int main() 
{
    int n;
    scanf("%d",&n);
    stall_info stall[n],*ptr = NULL,temp;
    ptr = stall;
    for (int i = 0; i <n ; i++,ptr++)
    {
        printf("Enter stall name :- ");
        scanf("%*c%s",ptr->name);
        printf("Enter revenue :- ");
        scanf("%f",&ptr->revenue);
        printf("Enter expance :- ");
        scanf("%f",&ptr->expanse);
        ptr->net_income = ptr->revenue - ptr->expanse;
    }
    ptr = stall;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if ((ptr + i)->net_income < (ptr + j )->net_income)
            {
                temp = stall[i];
                stall[i] =stall[j];
                stall[j] = temp;
            }
        }
    }
    ptr = stall;
    for (int i = 0; i < n; i++,ptr++)
    {
        printf("Name of stall is :- %s\n",ptr->name);
        printf("Net income of stall  :- %f\n",ptr->net_income);
    }
    return 0;
}